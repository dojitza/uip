//
// Created by Dojitza on 9.9.2019..
//

#ifndef UIP_HELPERS_H
#define UIP_HELPERS_H

#include <cstdint>

/**
 * Status code definition
 */
typedef int8_t status_t;
namespace STATUS
{
    enum uint8_t
    {
        OK = 0,
        GENERIC_ERROR = 1,
    };
}

/**
 * sPoint3d
 */
struct sPoint3d
{
    int32_t xCoord;
    int32_t yCoord;
    int32_t zCoord;
};
typedef struct sPoint3d Point3d;


typedef int32_t length_t;

#endif //UIP_HELPERS_H
