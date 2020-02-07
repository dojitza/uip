#include <iostream>
#include "CommandLineRenderer.hpp"
#include "Renderer.hpp"
#include <vector>
int main() {
    std::cout << "Hello, World!" << std::endl;
    Renderer *renderer = new CommandLineRenderer();
    std::vector<Point3d> points;
    for(int i=0; i<10; ++i){
        points.push_back({i,i*2,0});
        renderer->drawLine(points[0], points[i]);
    }


    return 0;
}