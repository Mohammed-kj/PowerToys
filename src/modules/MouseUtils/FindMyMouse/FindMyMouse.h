#pragma once
#include "pch.h"

constexpr bool FIND_MY_MOUSE_DEFAULT_DO_NOT_ACTIVATE_ON_GAME_MODE = true;
const winrt::Windows::UI::Color FIND_MY_MOUSE_DEFAULT_BACKGROUND_COLOR = winrt::Windows::UI::ColorHelper::FromArgb(255, 0, 0, 0);
const winrt::Windows::UI::Color FIND_MY_MOUSE_DEFAULT_SPOTLIGHT_COLOR = winrt::Windows::UI::ColorHelper::FromArgb(255, 255, 255, 255);
constexpr int FIND_MY_MOUSE_DEFAULT_OVERLAY_OPACITY = 50;
constexpr int FIND_MY_MOUSE_DEFAULT_SPOTLIGHT_RADIUS = 100;
constexpr int FIND_MY_MOUSE_DEFAULT_ANIMATION_DURATION_MS = 500;
constexpr int FIND_MY_MOUSE_DEFAULT_SPOTLIGHT_INITIAL_ZOOM = 9;

struct FindMyMouseSettings
{
    bool doNotActivateOnGameMode = FIND_MY_MOUSE_DEFAULT_DO_NOT_ACTIVATE_ON_GAME_MODE;
    winrt::Windows::UI::Color backgroundColor = FIND_MY_MOUSE_DEFAULT_BACKGROUND_COLOR;
    winrt::Windows::UI::Color spotlightColor = FIND_MY_MOUSE_DEFAULT_SPOTLIGHT_COLOR;
    int overlayOpacity = FIND_MY_MOUSE_DEFAULT_OVERLAY_OPACITY;
    int spotlightRadius = FIND_MY_MOUSE_DEFAULT_SPOTLIGHT_RADIUS;
    int animationDurationMs = FIND_MY_MOUSE_DEFAULT_ANIMATION_DURATION_MS;
    int spotlightInitialZoom = FIND_MY_MOUSE_DEFAULT_SPOTLIGHT_INITIAL_ZOOM;
};

int FindMyMouseMain(HINSTANCE hinst, const FindMyMouseSettings& settings);
void FindMyMouseDisable();
bool FindMyMouseIsEnabled();
void FindMyMouseApplySettings(const FindMyMouseSettings& settings);
