// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Media_Animation_2_H
#define WINRT_Windows_UI_Xaml_Media_Animation_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation
{
    struct KeyTime
    {
        winrt::Windows::Foundation::TimeSpan TimeSpan;
    };
    inline bool operator==(KeyTime const& left, KeyTime const& right) noexcept
    {
        return left.TimeSpan == right.TimeSpan;
    }
    inline bool operator!=(KeyTime const& left, KeyTime const& right) noexcept
    {
        return !(left == right);
    }
    struct RepeatBehavior
    {
        double Count;
        winrt::Windows::Foundation::TimeSpan Duration;
        winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorType Type;
    };
    inline bool operator==(RepeatBehavior const& left, RepeatBehavior const& right) noexcept
    {
        return left.Count == right.Count && left.Duration == right.Duration && left.Type == right.Type;
    }
    inline bool operator!=(RepeatBehavior const& left, RepeatBehavior const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AddDeleteThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition,
        impl::base<AddDeleteThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AddDeleteThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AddDeleteThemeTransition(std::nullptr_t) noexcept {}
        AddDeleteThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition(ptr, take_ownership_from_abi) {}
        AddDeleteThemeTransition();
    };
    struct __declspec(empty_bases) BackEase : winrt::Windows::UI::Xaml::Media::Animation::IBackEase,
        impl::base<BackEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<BackEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        BackEase(std::nullptr_t) noexcept {}
        BackEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IBackEase(ptr, take_ownership_from_abi) {}
        BackEase();
        [[nodiscard]] static auto AmplitudeProperty();
    };
    struct __declspec(empty_bases) BasicConnectedAnimationConfiguration : winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration,
        impl::base<BasicConnectedAnimationConfiguration, winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration>,
        impl::require<BasicConnectedAnimationConfiguration, winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>
    {
        BasicConnectedAnimationConfiguration(std::nullptr_t) noexcept {}
        BasicConnectedAnimationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration(ptr, take_ownership_from_abi) {}
        BasicConnectedAnimationConfiguration();
    };
    struct __declspec(empty_bases) BeginStoryboard : winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard,
        impl::base<BeginStoryboard, winrt::Windows::UI::Xaml::TriggerAction, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<BeginStoryboard, winrt::Windows::UI::Xaml::ITriggerAction, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        BeginStoryboard(std::nullptr_t) noexcept {}
        BeginStoryboard(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard(ptr, take_ownership_from_abi) {}
        BeginStoryboard();
        [[nodiscard]] static auto StoryboardProperty();
    };
    struct __declspec(empty_bases) BounceEase : winrt::Windows::UI::Xaml::Media::Animation::IBounceEase,
        impl::base<BounceEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<BounceEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        BounceEase(std::nullptr_t) noexcept {}
        BounceEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IBounceEase(ptr, take_ownership_from_abi) {}
        BounceEase();
        [[nodiscard]] static auto BouncesProperty();
        [[nodiscard]] static auto BouncinessProperty();
    };
    struct __declspec(empty_bases) CircleEase : winrt::Windows::UI::Xaml::Media::Animation::ICircleEase,
        impl::base<CircleEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CircleEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CircleEase(std::nullptr_t) noexcept {}
        CircleEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ICircleEase(ptr, take_ownership_from_abi) {}
        CircleEase();
    };
    struct __declspec(empty_bases) ColorAnimation : winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation,
        impl::base<ColorAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorAnimation(std::nullptr_t) noexcept {}
        ColorAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation(ptr, take_ownership_from_abi) {}
        ColorAnimation();
        [[nodiscard]] static auto FromProperty();
        [[nodiscard]] static auto ToProperty();
        [[nodiscard]] static auto ByProperty();
        [[nodiscard]] static auto EasingFunctionProperty();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) ColorAnimationUsingKeyFrames : winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames,
        impl::base<ColorAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorAnimationUsingKeyFrames(std::nullptr_t) noexcept {}
        ColorAnimationUsingKeyFrames(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames(ptr, take_ownership_from_abi) {}
        ColorAnimationUsingKeyFrames();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) ColorKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame,
        impl::base<ColorKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorKeyFrame(std::nullptr_t) noexcept {}
        ColorKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ValueProperty();
        [[nodiscard]] static auto KeyTimeProperty();
    };
    struct __declspec(empty_bases) ColorKeyFrameCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame>
    {
        ColorKeyFrameCollection(std::nullptr_t) noexcept {}
        ColorKeyFrameCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame>(ptr, take_ownership_from_abi) {}
        ColorKeyFrameCollection();
    };
    struct __declspec(empty_bases) CommonNavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo,
        impl::base<CommonNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommonNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommonNavigationTransitionInfo(std::nullptr_t) noexcept {}
        CommonNavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo(ptr, take_ownership_from_abi) {}
        CommonNavigationTransitionInfo();
        [[nodiscard]] static auto IsStaggeringEnabledProperty();
        [[nodiscard]] static auto IsStaggerElementProperty();
        static auto GetIsStaggerElement(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetIsStaggerElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
    };
    struct __declspec(empty_bases) ConnectedAnimation : winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation,
        impl::require<ConnectedAnimation, winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2, winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation3>
    {
        ConnectedAnimation(std::nullptr_t) noexcept {}
        ConnectedAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation(ptr, take_ownership_from_abi) {}
        using winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation::TryStart;
        using impl::consume_t<ConnectedAnimation, winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>::TryStart;
    };
    struct __declspec(empty_bases) ConnectedAnimationConfiguration : winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration
    {
        ConnectedAnimationConfiguration(std::nullptr_t) noexcept {}
        ConnectedAnimationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ConnectedAnimationService : winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService
    {
        ConnectedAnimationService(std::nullptr_t) noexcept {}
        ConnectedAnimationService(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) ContentThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition,
        impl::base<ContentThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContentThemeTransition(std::nullptr_t) noexcept {}
        ContentThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition(ptr, take_ownership_from_abi) {}
        ContentThemeTransition();
        [[nodiscard]] static auto HorizontalOffsetProperty();
        [[nodiscard]] static auto VerticalOffsetProperty();
    };
    struct __declspec(empty_bases) ContinuumNavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo,
        impl::base<ContinuumNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContinuumNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContinuumNavigationTransitionInfo(std::nullptr_t) noexcept {}
        ContinuumNavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo(ptr, take_ownership_from_abi) {}
        ContinuumNavigationTransitionInfo();
        [[nodiscard]] static auto ExitElementProperty();
        [[nodiscard]] static auto IsEntranceElementProperty();
        static auto GetIsEntranceElement(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetIsEntranceElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto IsExitElementProperty();
        static auto GetIsExitElement(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetIsExitElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto ExitElementContainerProperty();
        static auto GetExitElementContainer(winrt::Windows::UI::Xaml::Controls::ListViewBase const& element);
        static auto SetExitElementContainer(winrt::Windows::UI::Xaml::Controls::ListViewBase const& element, bool value);
    };
    struct __declspec(empty_bases) CubicEase : winrt::Windows::UI::Xaml::Media::Animation::ICubicEase,
        impl::base<CubicEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CubicEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CubicEase(std::nullptr_t) noexcept {}
        CubicEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ICubicEase(ptr, take_ownership_from_abi) {}
        CubicEase();
    };
    struct __declspec(empty_bases) DirectConnectedAnimationConfiguration : winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration,
        impl::base<DirectConnectedAnimationConfiguration, winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration>,
        impl::require<DirectConnectedAnimationConfiguration, winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>
    {
        DirectConnectedAnimationConfiguration(std::nullptr_t) noexcept {}
        DirectConnectedAnimationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration(ptr, take_ownership_from_abi) {}
        DirectConnectedAnimationConfiguration();
    };
    struct __declspec(empty_bases) DiscreteColorKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame,
        impl::base<DiscreteColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DiscreteColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DiscreteColorKeyFrame(std::nullptr_t) noexcept {}
        DiscreteColorKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame(ptr, take_ownership_from_abi) {}
        DiscreteColorKeyFrame();
    };
    struct __declspec(empty_bases) DiscreteDoubleKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame,
        impl::base<DiscreteDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DiscreteDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DiscreteDoubleKeyFrame(std::nullptr_t) noexcept {}
        DiscreteDoubleKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame(ptr, take_ownership_from_abi) {}
        DiscreteDoubleKeyFrame();
    };
    struct __declspec(empty_bases) DiscreteObjectKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame,
        impl::base<DiscreteObjectKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DiscreteObjectKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DiscreteObjectKeyFrame(std::nullptr_t) noexcept {}
        DiscreteObjectKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame(ptr, take_ownership_from_abi) {}
        DiscreteObjectKeyFrame();
    };
    struct __declspec(empty_bases) DiscretePointKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame,
        impl::base<DiscretePointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DiscretePointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DiscretePointKeyFrame(std::nullptr_t) noexcept {}
        DiscretePointKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame(ptr, take_ownership_from_abi) {}
        DiscretePointKeyFrame();
    };
    struct __declspec(empty_bases) DoubleAnimation : winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation,
        impl::base<DoubleAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DoubleAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DoubleAnimation(std::nullptr_t) noexcept {}
        DoubleAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation(ptr, take_ownership_from_abi) {}
        DoubleAnimation();
        [[nodiscard]] static auto FromProperty();
        [[nodiscard]] static auto ToProperty();
        [[nodiscard]] static auto ByProperty();
        [[nodiscard]] static auto EasingFunctionProperty();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) DoubleAnimationUsingKeyFrames : winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames,
        impl::base<DoubleAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DoubleAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DoubleAnimationUsingKeyFrames(std::nullptr_t) noexcept {}
        DoubleAnimationUsingKeyFrames(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames(ptr, take_ownership_from_abi) {}
        DoubleAnimationUsingKeyFrames();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) DoubleKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame,
        impl::base<DoubleKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DoubleKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DoubleKeyFrame(std::nullptr_t) noexcept {}
        DoubleKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ValueProperty();
        [[nodiscard]] static auto KeyTimeProperty();
    };
    struct __declspec(empty_bases) DoubleKeyFrameCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>
    {
        DoubleKeyFrameCollection(std::nullptr_t) noexcept {}
        DoubleKeyFrameCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>(ptr, take_ownership_from_abi) {}
        DoubleKeyFrameCollection();
    };
    struct __declspec(empty_bases) DragItemThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation,
        impl::base<DragItemThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DragItemThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DragItemThemeAnimation(std::nullptr_t) noexcept {}
        DragItemThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation(ptr, take_ownership_from_abi) {}
        DragItemThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) DragOverThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation,
        impl::base<DragOverThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DragOverThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DragOverThemeAnimation(std::nullptr_t) noexcept {}
        DragOverThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation(ptr, take_ownership_from_abi) {}
        DragOverThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
        [[nodiscard]] static auto ToOffsetProperty();
        [[nodiscard]] static auto DirectionProperty();
    };
    struct __declspec(empty_bases) DrillInNavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo,
        impl::base<DrillInNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DrillInNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DrillInNavigationTransitionInfo(std::nullptr_t) noexcept {}
        DrillInNavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo(ptr, take_ownership_from_abi) {}
        DrillInNavigationTransitionInfo();
    };
    struct __declspec(empty_bases) DrillInThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation,
        impl::base<DrillInThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DrillInThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DrillInThemeAnimation(std::nullptr_t) noexcept {}
        DrillInThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation(ptr, take_ownership_from_abi) {}
        DrillInThemeAnimation();
        [[nodiscard]] static auto EntranceTargetNameProperty();
        [[nodiscard]] static auto EntranceTargetProperty();
        [[nodiscard]] static auto ExitTargetNameProperty();
        [[nodiscard]] static auto ExitTargetProperty();
    };
    struct __declspec(empty_bases) DrillOutThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation,
        impl::base<DrillOutThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DrillOutThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DrillOutThemeAnimation(std::nullptr_t) noexcept {}
        DrillOutThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation(ptr, take_ownership_from_abi) {}
        DrillOutThemeAnimation();
        [[nodiscard]] static auto EntranceTargetNameProperty();
        [[nodiscard]] static auto EntranceTargetProperty();
        [[nodiscard]] static auto ExitTargetNameProperty();
        [[nodiscard]] static auto ExitTargetProperty();
    };
    struct __declspec(empty_bases) DropTargetItemThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation,
        impl::base<DropTargetItemThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DropTargetItemThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DropTargetItemThemeAnimation(std::nullptr_t) noexcept {}
        DropTargetItemThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation(ptr, take_ownership_from_abi) {}
        DropTargetItemThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) EasingColorKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame,
        impl::base<EasingColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EasingColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EasingColorKeyFrame(std::nullptr_t) noexcept {}
        EasingColorKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame(ptr, take_ownership_from_abi) {}
        EasingColorKeyFrame();
        [[nodiscard]] static auto EasingFunctionProperty();
    };
    struct __declspec(empty_bases) EasingDoubleKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame,
        impl::base<EasingDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EasingDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EasingDoubleKeyFrame(std::nullptr_t) noexcept {}
        EasingDoubleKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame(ptr, take_ownership_from_abi) {}
        EasingDoubleKeyFrame();
        [[nodiscard]] static auto EasingFunctionProperty();
    };
    struct __declspec(empty_bases) EasingFunctionBase : winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase,
        impl::base<EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EasingFunctionBase(std::nullptr_t) noexcept {}
        EasingFunctionBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto EasingModeProperty();
    };
    struct __declspec(empty_bases) EasingPointKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame,
        impl::base<EasingPointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EasingPointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EasingPointKeyFrame(std::nullptr_t) noexcept {}
        EasingPointKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame(ptr, take_ownership_from_abi) {}
        EasingPointKeyFrame();
        [[nodiscard]] static auto EasingFunctionProperty();
    };
    struct __declspec(empty_bases) EdgeUIThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition,
        impl::base<EdgeUIThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EdgeUIThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EdgeUIThemeTransition(std::nullptr_t) noexcept {}
        EdgeUIThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition(ptr, take_ownership_from_abi) {}
        EdgeUIThemeTransition();
        [[nodiscard]] static auto EdgeProperty();
    };
    struct __declspec(empty_bases) ElasticEase : winrt::Windows::UI::Xaml::Media::Animation::IElasticEase,
        impl::base<ElasticEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ElasticEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ElasticEase(std::nullptr_t) noexcept {}
        ElasticEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IElasticEase(ptr, take_ownership_from_abi) {}
        ElasticEase();
        [[nodiscard]] static auto OscillationsProperty();
        [[nodiscard]] static auto SpringinessProperty();
    };
    struct __declspec(empty_bases) EntranceNavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo,
        impl::base<EntranceNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EntranceNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EntranceNavigationTransitionInfo(std::nullptr_t) noexcept {}
        EntranceNavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo(ptr, take_ownership_from_abi) {}
        EntranceNavigationTransitionInfo();
        [[nodiscard]] static auto IsTargetElementProperty();
        static auto GetIsTargetElement(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetIsTargetElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
    };
    struct __declspec(empty_bases) EntranceThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition,
        impl::base<EntranceThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<EntranceThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        EntranceThemeTransition(std::nullptr_t) noexcept {}
        EntranceThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition(ptr, take_ownership_from_abi) {}
        EntranceThemeTransition();
        [[nodiscard]] static auto FromHorizontalOffsetProperty();
        [[nodiscard]] static auto FromVerticalOffsetProperty();
        [[nodiscard]] static auto IsStaggeringEnabledProperty();
    };
    struct __declspec(empty_bases) ExponentialEase : winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase,
        impl::base<ExponentialEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ExponentialEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ExponentialEase(std::nullptr_t) noexcept {}
        ExponentialEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase(ptr, take_ownership_from_abi) {}
        ExponentialEase();
        [[nodiscard]] static auto ExponentProperty();
    };
    struct __declspec(empty_bases) FadeInThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation,
        impl::base<FadeInThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FadeInThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FadeInThemeAnimation(std::nullptr_t) noexcept {}
        FadeInThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation(ptr, take_ownership_from_abi) {}
        FadeInThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) FadeOutThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation,
        impl::base<FadeOutThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FadeOutThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FadeOutThemeAnimation(std::nullptr_t) noexcept {}
        FadeOutThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation(ptr, take_ownership_from_abi) {}
        FadeOutThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) GravityConnectedAnimationConfiguration : winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration,
        impl::base<GravityConnectedAnimationConfiguration, winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration>,
        impl::require<GravityConnectedAnimationConfiguration, winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration2, winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>
    {
        GravityConnectedAnimationConfiguration(std::nullptr_t) noexcept {}
        GravityConnectedAnimationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration(ptr, take_ownership_from_abi) {}
        GravityConnectedAnimationConfiguration();
    };
    struct __declspec(empty_bases) KeySpline : winrt::Windows::UI::Xaml::Media::Animation::IKeySpline,
        impl::base<KeySpline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<KeySpline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        KeySpline(std::nullptr_t) noexcept {}
        KeySpline(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IKeySpline(ptr, take_ownership_from_abi) {}
        KeySpline();
    };
    struct __declspec(empty_bases) KeyTimeHelper : winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper
    {
        KeyTimeHelper(std::nullptr_t) noexcept {}
        KeyTimeHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper(ptr, take_ownership_from_abi) {}
        static auto FromTimeSpan(winrt::Windows::Foundation::TimeSpan const& timeSpan);
    };
    struct __declspec(empty_bases) LinearColorKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame,
        impl::base<LinearColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LinearColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LinearColorKeyFrame(std::nullptr_t) noexcept {}
        LinearColorKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame(ptr, take_ownership_from_abi) {}
        LinearColorKeyFrame();
    };
    struct __declspec(empty_bases) LinearDoubleKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame,
        impl::base<LinearDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LinearDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LinearDoubleKeyFrame(std::nullptr_t) noexcept {}
        LinearDoubleKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame(ptr, take_ownership_from_abi) {}
        LinearDoubleKeyFrame();
    };
    struct __declspec(empty_bases) LinearPointKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame,
        impl::base<LinearPointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LinearPointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LinearPointKeyFrame(std::nullptr_t) noexcept {}
        LinearPointKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame(ptr, take_ownership_from_abi) {}
        LinearPointKeyFrame();
    };
    struct __declspec(empty_bases) NavigationThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition,
        impl::base<NavigationThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationThemeTransition(std::nullptr_t) noexcept {}
        NavigationThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition(ptr, take_ownership_from_abi) {}
        NavigationThemeTransition();
        [[nodiscard]] static auto DefaultNavigationTransitionInfoProperty();
    };
    struct __declspec(empty_bases) NavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo,
        impl::base<NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationTransitionInfo(std::nullptr_t) noexcept {}
        NavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ObjectAnimationUsingKeyFrames : winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames,
        impl::base<ObjectAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ObjectAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ObjectAnimationUsingKeyFrames(std::nullptr_t) noexcept {}
        ObjectAnimationUsingKeyFrames(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames(ptr, take_ownership_from_abi) {}
        ObjectAnimationUsingKeyFrames();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) ObjectKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame,
        impl::base<ObjectKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ObjectKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ObjectKeyFrame(std::nullptr_t) noexcept {}
        ObjectKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ValueProperty();
        [[nodiscard]] static auto KeyTimeProperty();
    };
    struct __declspec(empty_bases) ObjectKeyFrameCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>
    {
        ObjectKeyFrameCollection(std::nullptr_t) noexcept {}
        ObjectKeyFrameCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>(ptr, take_ownership_from_abi) {}
        ObjectKeyFrameCollection();
    };
    struct __declspec(empty_bases) PaneThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition,
        impl::base<PaneThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PaneThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PaneThemeTransition(std::nullptr_t) noexcept {}
        PaneThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition(ptr, take_ownership_from_abi) {}
        PaneThemeTransition();
        [[nodiscard]] static auto EdgeProperty();
    };
    struct __declspec(empty_bases) PointAnimation : winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation,
        impl::base<PointAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PointAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PointAnimation(std::nullptr_t) noexcept {}
        PointAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation(ptr, take_ownership_from_abi) {}
        PointAnimation();
        [[nodiscard]] static auto FromProperty();
        [[nodiscard]] static auto ToProperty();
        [[nodiscard]] static auto ByProperty();
        [[nodiscard]] static auto EasingFunctionProperty();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) PointAnimationUsingKeyFrames : winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames,
        impl::base<PointAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PointAnimationUsingKeyFrames, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PointAnimationUsingKeyFrames(std::nullptr_t) noexcept {}
        PointAnimationUsingKeyFrames(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames(ptr, take_ownership_from_abi) {}
        PointAnimationUsingKeyFrames();
        [[nodiscard]] static auto EnableDependentAnimationProperty();
    };
    struct __declspec(empty_bases) PointKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame,
        impl::base<PointKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PointKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PointKeyFrame(std::nullptr_t) noexcept {}
        PointKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ValueProperty();
        [[nodiscard]] static auto KeyTimeProperty();
    };
    struct __declspec(empty_bases) PointKeyFrameCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame>
    {
        PointKeyFrameCollection(std::nullptr_t) noexcept {}
        PointKeyFrameCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame>(ptr, take_ownership_from_abi) {}
        PointKeyFrameCollection();
    };
    struct __declspec(empty_bases) PointerDownThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation,
        impl::base<PointerDownThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PointerDownThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PointerDownThemeAnimation(std::nullptr_t) noexcept {}
        PointerDownThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation(ptr, take_ownership_from_abi) {}
        PointerDownThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) PointerUpThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation,
        impl::base<PointerUpThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PointerUpThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PointerUpThemeAnimation(std::nullptr_t) noexcept {}
        PointerUpThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation(ptr, take_ownership_from_abi) {}
        PointerUpThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) PopInThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation,
        impl::base<PopInThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PopInThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PopInThemeAnimation(std::nullptr_t) noexcept {}
        PopInThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation(ptr, take_ownership_from_abi) {}
        PopInThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
        [[nodiscard]] static auto FromHorizontalOffsetProperty();
        [[nodiscard]] static auto FromVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) PopOutThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation,
        impl::base<PopOutThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PopOutThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PopOutThemeAnimation(std::nullptr_t) noexcept {}
        PopOutThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation(ptr, take_ownership_from_abi) {}
        PopOutThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
    };
    struct __declspec(empty_bases) PopupThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition,
        impl::base<PopupThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PopupThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PopupThemeTransition(std::nullptr_t) noexcept {}
        PopupThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition(ptr, take_ownership_from_abi) {}
        PopupThemeTransition();
        [[nodiscard]] static auto FromHorizontalOffsetProperty();
        [[nodiscard]] static auto FromVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) PowerEase : winrt::Windows::UI::Xaml::Media::Animation::IPowerEase,
        impl::base<PowerEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PowerEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PowerEase(std::nullptr_t) noexcept {}
        PowerEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IPowerEase(ptr, take_ownership_from_abi) {}
        PowerEase();
        [[nodiscard]] static auto PowerProperty();
    };
    struct __declspec(empty_bases) QuadraticEase : winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase,
        impl::base<QuadraticEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<QuadraticEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        QuadraticEase(std::nullptr_t) noexcept {}
        QuadraticEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase(ptr, take_ownership_from_abi) {}
        QuadraticEase();
    };
    struct __declspec(empty_bases) QuarticEase : winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase,
        impl::base<QuarticEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<QuarticEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        QuarticEase(std::nullptr_t) noexcept {}
        QuarticEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase(ptr, take_ownership_from_abi) {}
        QuarticEase();
    };
    struct __declspec(empty_bases) QuinticEase : winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase,
        impl::base<QuinticEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<QuinticEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        QuinticEase(std::nullptr_t) noexcept {}
        QuinticEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase(ptr, take_ownership_from_abi) {}
        QuinticEase();
    };
    struct __declspec(empty_bases) ReorderThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition,
        impl::base<ReorderThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ReorderThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ReorderThemeTransition(std::nullptr_t) noexcept {}
        ReorderThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition(ptr, take_ownership_from_abi) {}
        ReorderThemeTransition();
    };
    struct __declspec(empty_bases) RepeatBehaviorHelper : winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper
    {
        RepeatBehaviorHelper(std::nullptr_t) noexcept {}
        RepeatBehaviorHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Forever();
        static auto FromCount(double count);
        static auto FromDuration(winrt::Windows::Foundation::TimeSpan const& duration);
        static auto GetHasCount(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target);
        static auto GetHasDuration(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target);
        static auto Equals(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target, winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value);
    };
    struct __declspec(empty_bases) RepositionThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation,
        impl::base<RepositionThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RepositionThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RepositionThemeAnimation(std::nullptr_t) noexcept {}
        RepositionThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation(ptr, take_ownership_from_abi) {}
        RepositionThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
        [[nodiscard]] static auto FromHorizontalOffsetProperty();
        [[nodiscard]] static auto FromVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) RepositionThemeTransition : winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition,
        impl::base<RepositionThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RepositionThemeTransition, winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2, winrt::Windows::UI::Xaml::Media::Animation::ITransition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RepositionThemeTransition(std::nullptr_t) noexcept {}
        RepositionThemeTransition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition(ptr, take_ownership_from_abi) {}
        RepositionThemeTransition();
        [[nodiscard]] static auto IsStaggeringEnabledProperty();
    };
    struct __declspec(empty_bases) SineEase : winrt::Windows::UI::Xaml::Media::Animation::ISineEase,
        impl::base<SineEase, winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SineEase, winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SineEase(std::nullptr_t) noexcept {}
        SineEase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISineEase(ptr, take_ownership_from_abi) {}
        SineEase();
    };
    struct __declspec(empty_bases) SlideNavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo,
        impl::base<SlideNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SlideNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo2, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SlideNavigationTransitionInfo(std::nullptr_t) noexcept {}
        SlideNavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo(ptr, take_ownership_from_abi) {}
        SlideNavigationTransitionInfo();
        [[nodiscard]] static auto EffectProperty();
    };
    struct __declspec(empty_bases) SplineColorKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame,
        impl::base<SplineColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplineColorKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplineColorKeyFrame(std::nullptr_t) noexcept {}
        SplineColorKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame(ptr, take_ownership_from_abi) {}
        SplineColorKeyFrame();
        [[nodiscard]] static auto KeySplineProperty();
    };
    struct __declspec(empty_bases) SplineDoubleKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame,
        impl::base<SplineDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplineDoubleKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplineDoubleKeyFrame(std::nullptr_t) noexcept {}
        SplineDoubleKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame(ptr, take_ownership_from_abi) {}
        SplineDoubleKeyFrame();
        [[nodiscard]] static auto KeySplineProperty();
    };
    struct __declspec(empty_bases) SplinePointKeyFrame : winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame,
        impl::base<SplinePointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplinePointKeyFrame, winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplinePointKeyFrame(std::nullptr_t) noexcept {}
        SplinePointKeyFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame(ptr, take_ownership_from_abi) {}
        SplinePointKeyFrame();
        [[nodiscard]] static auto KeySplineProperty();
    };
    struct __declspec(empty_bases) SplitCloseThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation,
        impl::base<SplitCloseThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitCloseThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplitCloseThemeAnimation(std::nullptr_t) noexcept {}
        SplitCloseThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation(ptr, take_ownership_from_abi) {}
        SplitCloseThemeAnimation();
        [[nodiscard]] static auto OpenedTargetNameProperty();
        [[nodiscard]] static auto OpenedTargetProperty();
        [[nodiscard]] static auto ClosedTargetNameProperty();
        [[nodiscard]] static auto ClosedTargetProperty();
        [[nodiscard]] static auto ContentTargetNameProperty();
        [[nodiscard]] static auto ContentTargetProperty();
        [[nodiscard]] static auto OpenedLengthProperty();
        [[nodiscard]] static auto ClosedLengthProperty();
        [[nodiscard]] static auto OffsetFromCenterProperty();
        [[nodiscard]] static auto ContentTranslationDirectionProperty();
        [[nodiscard]] static auto ContentTranslationOffsetProperty();
    };
    struct __declspec(empty_bases) SplitOpenThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation,
        impl::base<SplitOpenThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitOpenThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplitOpenThemeAnimation(std::nullptr_t) noexcept {}
        SplitOpenThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation(ptr, take_ownership_from_abi) {}
        SplitOpenThemeAnimation();
        [[nodiscard]] static auto OpenedTargetNameProperty();
        [[nodiscard]] static auto OpenedTargetProperty();
        [[nodiscard]] static auto ClosedTargetNameProperty();
        [[nodiscard]] static auto ClosedTargetProperty();
        [[nodiscard]] static auto ContentTargetNameProperty();
        [[nodiscard]] static auto ContentTargetProperty();
        [[nodiscard]] static auto OpenedLengthProperty();
        [[nodiscard]] static auto ClosedLengthProperty();
        [[nodiscard]] static auto OffsetFromCenterProperty();
        [[nodiscard]] static auto ContentTranslationDirectionProperty();
        [[nodiscard]] static auto ContentTranslationOffsetProperty();
    };
    struct __declspec(empty_bases) Storyboard : winrt::Windows::UI::Xaml::Media::Animation::IStoryboard,
        impl::base<Storyboard, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Storyboard, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Storyboard(std::nullptr_t) noexcept {}
        Storyboard(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::IStoryboard(ptr, take_ownership_from_abi) {}
        Storyboard();
        [[nodiscard]] static auto TargetPropertyProperty();
        static auto GetTargetProperty(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element);
        static auto SetTargetProperty(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& path);
        [[nodiscard]] static auto TargetNameProperty();
        static auto GetTargetName(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element);
        static auto SetTargetName(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& name);
        static auto SetTarget(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& timeline, winrt::Windows::UI::Xaml::DependencyObject const& target);
    };
    struct __declspec(empty_bases) SuppressNavigationTransitionInfo : winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo,
        impl::base<SuppressNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SuppressNavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo, winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SuppressNavigationTransitionInfo(std::nullptr_t) noexcept {}
        SuppressNavigationTransitionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo(ptr, take_ownership_from_abi) {}
        SuppressNavigationTransitionInfo();
    };
    struct __declspec(empty_bases) SwipeBackThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation,
        impl::base<SwipeBackThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwipeBackThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwipeBackThemeAnimation(std::nullptr_t) noexcept {}
        SwipeBackThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation(ptr, take_ownership_from_abi) {}
        SwipeBackThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
        [[nodiscard]] static auto FromHorizontalOffsetProperty();
        [[nodiscard]] static auto FromVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) SwipeHintThemeAnimation : winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation,
        impl::base<SwipeHintThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwipeHintThemeAnimation, winrt::Windows::UI::Xaml::Media::Animation::ITimeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwipeHintThemeAnimation(std::nullptr_t) noexcept {}
        SwipeHintThemeAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation(ptr, take_ownership_from_abi) {}
        SwipeHintThemeAnimation();
        [[nodiscard]] static auto TargetNameProperty();
        [[nodiscard]] static auto ToHorizontalOffsetProperty();
        [[nodiscard]] static auto ToVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) Timeline : winrt::Windows::UI::Xaml::Media::Animation::ITimeline,
        impl::base<Timeline, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Timeline, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Timeline(std::nullptr_t) noexcept {}
        Timeline(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ITimeline(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AllowDependentAnimations();
        static auto AllowDependentAnimations(bool value);
        [[nodiscard]] static auto AutoReverseProperty();
        [[nodiscard]] static auto BeginTimeProperty();
        [[nodiscard]] static auto DurationProperty();
        [[nodiscard]] static auto SpeedRatioProperty();
        [[nodiscard]] static auto FillBehaviorProperty();
        [[nodiscard]] static auto RepeatBehaviorProperty();
    };
    struct __declspec(empty_bases) TimelineCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::Timeline>
    {
        TimelineCollection(std::nullptr_t) noexcept {}
        TimelineCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::Timeline>(ptr, take_ownership_from_abi) {}
        TimelineCollection();
    };
    struct __declspec(empty_bases) Transition : winrt::Windows::UI::Xaml::Media::Animation::ITransition,
        impl::base<Transition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Transition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Transition(std::nullptr_t) noexcept {}
        Transition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Animation::ITransition(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TransitionCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::Transition>
    {
        TransitionCollection(std::nullptr_t) noexcept {}
        TransitionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::Transition>(ptr, take_ownership_from_abi) {}
        TransitionCollection();
    };
    template <typename D>
    class INavigationTransitionInfoOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using INavigationTransitionInfoOverrides = winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides;
        WINRT_IMPL_AUTO(hstring) GetNavigationStateCore() const;
        WINRT_IMPL_AUTO(void) SetNavigationStateCore(param::hstring const& navigationState) const;
    };
}
#endif
