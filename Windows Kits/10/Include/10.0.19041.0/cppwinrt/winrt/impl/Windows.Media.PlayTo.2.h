// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_PlayTo_2_H
#define WINRT_Windows_Media_PlayTo_2_H
#include "winrt/impl/Windows.Media.PlayTo.1.h"
namespace winrt::Windows::Media::PlayTo
{
    struct __declspec(empty_bases) CurrentTimeChangeRequestedEventArgs : Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs
    {
        CurrentTimeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        CurrentTimeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MuteChangeRequestedEventArgs : Windows::Media::PlayTo::IMuteChangeRequestedEventArgs
    {
        MuteChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        MuteChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IMuteChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToConnection : Windows::Media::PlayTo::IPlayToConnection
    {
        PlayToConnection(std::nullptr_t) noexcept {}
        PlayToConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToConnectionErrorEventArgs : Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs
    {
        PlayToConnectionErrorEventArgs(std::nullptr_t) noexcept {}
        PlayToConnectionErrorEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToConnectionStateChangedEventArgs : Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs
    {
        PlayToConnectionStateChangedEventArgs(std::nullptr_t) noexcept {}
        PlayToConnectionStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToConnectionTransferredEventArgs : Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs
    {
        PlayToConnectionTransferredEventArgs(std::nullptr_t) noexcept {}
        PlayToConnectionTransferredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToManager : Windows::Media::PlayTo::IPlayToManager
    {
        PlayToManager(std::nullptr_t) noexcept {}
        PlayToManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto ShowPlayToUI();
    };
    struct __declspec(empty_bases) PlayToReceiver : Windows::Media::PlayTo::IPlayToReceiver
    {
        PlayToReceiver(std::nullptr_t) noexcept {}
        PlayToReceiver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToReceiver(ptr, take_ownership_from_abi) {}
        PlayToReceiver();
    };
    struct __declspec(empty_bases) PlayToSource : Windows::Media::PlayTo::IPlayToSource,
        impl::require<PlayToSource, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
    {
        PlayToSource(std::nullptr_t) noexcept {}
        PlayToSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToSource(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToSourceDeferral : Windows::Media::PlayTo::IPlayToSourceDeferral
    {
        PlayToSourceDeferral(std::nullptr_t) noexcept {}
        PlayToSourceDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToSourceDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToSourceRequest : Windows::Media::PlayTo::IPlayToSourceRequest
    {
        PlayToSourceRequest(std::nullptr_t) noexcept {}
        PlayToSourceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToSourceRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToSourceRequestedEventArgs : Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs
    {
        PlayToSourceRequestedEventArgs(std::nullptr_t) noexcept {}
        PlayToSourceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlayToSourceSelectedEventArgs : Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs
    {
        PlayToSourceSelectedEventArgs(std::nullptr_t) noexcept {}
        PlayToSourceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackRateChangeRequestedEventArgs : Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs
    {
        PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackRateChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SourceChangeRequestedEventArgs : Windows::Media::PlayTo::ISourceChangeRequestedEventArgs
    {
        SourceChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        SourceChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::ISourceChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VolumeChangeRequestedEventArgs : Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs
    {
        VolumeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        VolumeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
