#include "raindrops.h"

namespace raindrops {

    std::string convert(int x) {
        std::string str{};
        if (x%3==0)
            str+="Pling";
        if (x%5==0)
            str+="Plang";
        if (x%7==0)
            str+="Plong";
        return (str.size()>0) ? str : std::to_string(x);
    }

}  // namespace raindrops
