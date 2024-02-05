//
// Created by Grzegorz Bednarek on 05/02/2024.
//

#ifndef PROCEDURALTERRAINGENERATION_VOXEL_H
#define PROCEDURALTERRAINGENERATION_VOXEL_H

#include <glad/glad.h>

class Voxel {
public:
    Voxel(int x, int y, int z);
    ~Voxel();

    void draw();
    void update();
    void destroy();

private:
    int x, y, z;
    unsigned int VBO, VAO;
};


#endif //PROCEDURALTERRAINGENERATION_VOXEL_H
