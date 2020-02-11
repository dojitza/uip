//
// Created by Dojitza on 7.9.2019..
//


#include <iostream>
#include <string>
#include "CommandLineRenderer.hpp"
#include "Helpers.h"

status_t CommandLineRenderer::drawLine(Point3d start, Point3d end) {
    std::cout << "start x: " << std::to_string(start.xCoord) << ", "
              << "start y: " << std::to_string(start.yCoord) << std::endl;
    std::cout << "end x: " << std::to_string(end.xCoord) << ", "
              << "end y: " << std::to_string(end.yCoord) << std::endl;
    return STATUS::OK;
}

status_t CommandLineRenderer::drawPoint(Point3d point) {
    return STATUS::OK;
}

status_t CommandLineRenderer::drawSphere(Point3d center, length_t radius) {
    return STATUS::OK;
}
