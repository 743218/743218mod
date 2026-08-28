#pragma once
#include <string>

class Client {
private:
  std::string clientName = "743218mod";
  std::string clientVersion = "0.0.1";
  std::string clientReleaseVersion = "pr";
public:
  std::string getClientName() {
    return clientName;
  }

  void setClientName(std::string s) {
    clientName = s;
  }

  std::string getClientVersion() {
    return clientVersion;
  }

  void setClientVersion(std::string s) {
    clientVersion = s;
  }

  std::string getClientReleaseVersion() {
    return clientReleaseVersion;
  }

  void setClientReleaseVersion(std::string s) {
    clientReleaseVersion = s;
  }
};
