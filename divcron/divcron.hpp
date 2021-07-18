#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;

CONTRACT divcron : public contract {
  public:
    using contract::contract;

    [[eosio::action]]
    void cron();
    
    [[eosio::action]]
    void version();

    const std::string freeos_contr = "optionsdiv4";

};
