#pragma once
#pragma warning(disable:4244)
#pragma warning(disable:4838)
#pragma warning(disable:4305)
#pragma warning(disable:4805)
#pragma warning(disable:26495)
#pragma warning(disable:6386)
#include <bits/stdc++.h>
#include <filesystem>
#include <thread>
#include <random>
#include <unordered_map>
#include <windows.h>
#include <tchar.h>
#include <chrono>
#include <array>


#define __ASSIMP_NEED


class Texture;
class Camera;
class Light;
class Renderer;

#include "stb_image.h"
#include "Types.h"
#include "Functions.h"
#include "Texture.h"
#include "Window.h"
#include "Camera.h"
#include "Renderer.h"
#include "Light.h"
#include "FPS.h"


#ifdef __ASSIMP_NEED
	#ifdef min
		using std::min;
		#undef min
	#endif
	#ifdef max
		#undef max
		using std::max;
	#endif
	#include<assimp/Importer.hpp>
	#include<assimp/scene.h>
	#include<assimp/postprocess.h>

		class Mesh;
		class Model;

	#include"Model.h"
	#include"Mesh.h"
#endif
