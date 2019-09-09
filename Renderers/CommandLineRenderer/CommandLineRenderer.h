//
// Created by Dojitza on 7.9.2019..
//

#ifndef UIP_COMMANDLINERENDERER_H
#define UIP_COMMANDLINERENDERER_H

#include "Renderer.h"

class CommandLineRenderer : public Renderer
{
public:
    status_t drawLine(Point3d start, Point3d end) override;

    status_t drawPoint(Point3d point) override;

    status_t drawSphere(Point3d center, length_t length) override;
};

#endif //UIP_COMMANDLINERENDERER_H
