//
// Created by Dojitza on 9.2.2020..
//

#ifndef UIP_SDL2RENDERER_H
#define UIP_SDL2RENDERER_H

#include "Renderer.hpp"

class SDL2Renderer : Renderer
{
    status_t drawLine(Point3d start, Point3d end) override;

    status_t drawPoint(Point3d point) override;

    status_t drawSphere(Point3d center, length_t radius) override;
};


#endif //UIP_SDL2RENDERER_H
