#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;

CONTRACT divcron : public contract {
  public:
    using contract::contract;

    [[eosio::action]]
    void cron();

    const std::string freeos_contr = "optionsdivu";

};
