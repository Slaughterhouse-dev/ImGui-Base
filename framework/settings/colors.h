#pragma once
#include "../headers/includes.h"
#include "../headers/flags.h"
#include <memory>

class c_colors
{
public:
	struct {
		c_col layout{ 255, 255, 255 };
	};
};

inline std::unique_ptr<c_colors> clr = std::make_unique<c_colors>();
