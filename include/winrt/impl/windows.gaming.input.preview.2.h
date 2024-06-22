// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Gaming_Input_Preview_2_H
#define WINRT_Windows_Gaming_Input_Preview_2_H
#include "winrt/impl/Windows.Gaming.Input.1.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview
{
    struct HeadsetGeqGains
    {
        int32_t band1Gain;
        int32_t band2Gain;
        int32_t band3Gain;
        int32_t band4Gain;
        int32_t band5Gain;
    };
    inline bool operator==(HeadsetGeqGains const& left, HeadsetGeqGains const& right) noexcept
    {
        return left.band1Gain == right.band1Gain && left.band2Gain == right.band2Gain && left.band3Gain == right.band3Gain && left.band4Gain == right.band4Gain && left.band5Gain == right.band5Gain;
    }
    inline bool operator!=(HeadsetGeqGains const& left, HeadsetGeqGains const& right) noexcept
    {
        return !(left == right);
    }
    struct GameControllerProviderInfo
    {
        GameControllerProviderInfo() = delete;
        static auto GetParentProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
        static auto GetProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
    };
    struct __declspec(empty_bases) LegacyGipGameControllerProvider : winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider
    {
        LegacyGipGameControllerProvider(std::nullptr_t) noexcept {}
        LegacyGipGameControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider(ptr, take_ownership_from_abi) {}
        static auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& controller);
        static auto FromGameControllerProvider(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
        static auto PairPilotToCopilot(winrt::Windows::System::User const& user, param::hstring const& pilotControllerProviderId, param::hstring const& copilotControllerProviderId);
        static auto ClearPairing(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId);
        static auto IsPilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId);
        static auto IsCopilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId);
    };
}
#endif
