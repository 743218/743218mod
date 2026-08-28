#pragma once
#include <string>

// Created by 742318 on Aug 28, 2026

class Client {
private:
  std::string clientName = "743218mod";
  std::string clientVersion = "0.0.1";
  std::string clientReleaseVersion = "pr";
  bool initialized = false;
public:
  std::string getClientName() {
    return clientName;
  }

  static inline void setClientName(std::string s) {
    clientName = s;
  }

  static inline std::string getClientVersion() {
    return clientVersion;
  }

  static inline void setClientVersion(std::string s) {
    clientVersion = s;
  }

  static inline std::string getClientReleaseVersion() {
    return clientReleaseVersion;
  }

  static inline void setClientReleaseVersion(std::string s) {
    clientReleaseVersion = s;
  }

  static inline bool isInitialized() {
    return initialized;
  }

  void initialize();
  void clientMessage(std::string);
};

extern Client client;
