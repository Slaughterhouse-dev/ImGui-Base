#pragma once
#include <string>
#include "imgui.h"

class c_elements
{
public:

    struct 
    {
        c_text name{ "ImGui Base" };
        c_vec2 size{ 800, 600 };
        float rounding{ 4 };
    } window;
};

inline std::unique_ptr<c_elements> elements = std::make_unique<c_elements>();
