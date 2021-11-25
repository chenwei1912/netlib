// Copyright 2021, Ethan Chen.  All rights reserved.
// Author: Ethan Chen (ChenWei)
//
// This is a public header file, it must only include public header files.

#ifndef NETLIB_TCPCLIENT_H
#define NETLIB_TCPCLIENT_H


#include <functional>
#include <atomic>

#include <boost/asio.hpp>

#include "TcpConnection.h"
#include "TimerId.h"


namespace netlib
{

class EventLoop;


class TcpClient
{
public:
    static const size_t Intervals;

    explicit TcpClient(EventLoop* loop);
    ~TcpClient();

    TcpClient(const TcpClient&) = delete;
    TcpClient& operator=(const TcpClient&) = delete;

    bool connect(const char* strip, unsigned short port, size_t interval = 10);
    void disconnect();

    inline EventLoop* get_loop() const { return loop_; }
    inline void set_connection_callback(const ConnectionCallback& cb)
    {
        connection_callback_ = cb;
    }
    inline void set_recv_callback(const RecvCallback& cb)
    {
        recv_callback_ = cb;
    }
    inline void set_sendcomplete_callback(const SendCompleteCallback& cb)
    {
        sendcomplete_callback_ = cb;
    }

private:
    void connect_loop();
    void disconnect_loop();

    
    void handle_connect(const boost::system::error_code& ec);
    void handle_timeout();

    void remove_conn(const TcpConnectionPtr& conn);
    void remove_conn_loop(const TcpConnectionPtr& conn);

    EventLoop* loop_;
    TcpConnectionPtr conn_;
    boost::asio::ip::tcp::endpoint ep_;
    size_t interval_;
    TimerId timer_;
    std::atomic_flag connecting_;

    ConnectionCallback connection_callback_;
    RecvCallback recv_callback_;
    SendCompleteCallback sendcomplete_callback_;
};

}// namespace netlib

#endif // NETLIB_TCPCLIENT_H
