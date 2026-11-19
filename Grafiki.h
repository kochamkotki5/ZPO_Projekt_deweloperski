#ifndef GRAFIKI_H
#define GRAFIKI_H

#include <iostream>
#include <string_view>

namespace kotki{
    constexpr std::string_view zwykly = R"*(
                   _  _/|
                   \` o o\
              __,.-"  =__T=
            ."        |
      _    /   ,    \/\
     ((____|    )_-\ \_\
      `-----` `--`  `--``
      )*";


    constexpr std::string_view glaskany = R"*(
                   _  _/|    
                   \` v v\
              __,.-"  =__T=
            ."        |
      _    /   ,    \/\
     ((____|    )_-\ \_\
      `-----` `--`  `--``
    )*";

    constexpr std::string_view spiacy = R"*(
                   _  _/|   Z
              ____ \` _ _\     Z
            ."     "  =__T=  Z     
           /   _        |                         
          |____))       /                        
          `-----` ----'"    
    )*";

    constexpr std::string_view spiacy_poduszka = R"*(
                   _  _/|   Z
              ____ \` _ _\     Z
            ."     "  =__T=  Z     
           /   _        |                         
        __|____))       /__                        
       (  `-----` ----'"   )
        "-----------------"

    )*";

    inline void drukuj(std::string_view obraz){
        std::cout << obraz << '\n';
    }
}

#endif