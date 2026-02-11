#include "darts.h"
#include <cmath>

namespace darts {

int score(float x, float y) {
    float radius = std::pow(x*x + y*y, 0.5f);
    if (radius <= 1.0f)
        return 10;
    else if (radius <= 5.0f)
        return 5;
    else if (radius <= 10.0f)
        return 1;
    return 0;
}

}  // namespace darts
