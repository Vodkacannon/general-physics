#pragma once

namespace general_physics
{
    struct vec_2f
    {
        float x;
        float y;
        vec_2f(float x, float y);
        
    };
    vec_2f add(const vec_2f& vector_1, const vec_2f& vector_2);
    vec_2f vec_2f_distance(const vec_2f& speed, const float time);
}