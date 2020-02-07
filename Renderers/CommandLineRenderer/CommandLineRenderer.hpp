//
// Created by Dojitza on 7.9.2019..
//

#ifndef UIP_COMMANDLINERENDERER_HPP
#define UIP_COMMANDLINERENDERER_HPP

#include "Renderer.hpp"

class CommandLineRenderer : public Renderer
{
public:
    status_t drawLine(Point3d start, Point3d end) override;

    status_t drawPoint(Point3d point) override;

    status_t drawSphere(Point3d center, length_t radius) override;
};

#endif //UIP_COMMANDLINERENDERER_HPP
