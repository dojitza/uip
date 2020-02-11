//
// Created by Dojitza on 7.9.2019..
//

#ifndef UIP_RENDERER_HPP
#define UIP_RENDERER_HPP

#include "Helpers.h"

class Renderer {

public:
    /**
     * Draws a line defined by two points @see Point3d
     * @return status code, @see status_t
     */
    virtual status_t drawLine(Point3d start, Point3d end) = 0;

    /**
     * Draws a point
     * @return status code, @see status_t
     */
    virtual status_t drawPoint(Point3d point) = 0;

    /**
     * Draws a cuboid using three defining points @see Point3d
     * @return status code, @see status_t
     */
    virtual status_t drawCuboid(Point3d point1, Point3d point2, Point3d point3);

    /**
     * Draws a sphere using a center point and radius length
     * @return
     */
    virtual status_t drawSphere(Point3d center, length_t radius) = 0;

};


#endif //UIP_RENDERER_HPP
