#include "divcron.hpp"

ACTION divcron::cron() {
  // require_auth("cron");
  
  action calldividend = action(
            permission_level{get_self(),"active"_n},
            name(freeos_contr),   
            "dividcompute"_n,
            std::make_tuple(get_self() )
        );
        calldividend.send();
  }

ACTION divcron::version() {
      std::string version_message = "Pointed to: " + freeos_contr;
      check(false, version_message);
}




