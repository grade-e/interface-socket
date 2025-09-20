#pragma once
#include <memory>
#include <string>
#include <variant>

#include "channel.hpp"
#include "transport/serial/serial.hpp"
#include "transport/tcp/tcp_client.hpp"
#include "transport/tcp/tcp_server.hpp"

namespace unilink {
namespace factory {

using namespace config;

class ChannelFactory {
 public:
  static std::shared_ptr<Channel> create_serial(boost::asio::io_context& ioc,
                                                const SerialConfig& cfg);
  static std::shared_ptr<Channel> create_tcp_client(
      boost::asio::io_context& ioc, const TcpClientConfig& cfg);
  static std::shared_ptr<Channel> create_tcp_server(
      boost::asio::io_context& ioc, const TcpServerConfig& cfg);
};
}  // namespace factory
}  // namespace unilink