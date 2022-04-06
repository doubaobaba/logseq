// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Editing_H
#define WINRT_Windows_Media_Editing_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.Editing.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromStart() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_TrimTimeFromStart(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_TrimTimeFromStart(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromEnd() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_TrimTimeFromEnd(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_TrimTimeFromEnd(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::OriginalDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_OriginalDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimmedDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_TrimmedDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::UserData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_UserData(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Delay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_Delay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Delay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_Delay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Volume(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_Volume(value));
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Volume() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_Volume(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Clone() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->Clone(&value));
        return Windows::Media::Editing::BackgroundAudioTrack{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::GetAudioEncodingProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->GetAudioEncodingProperties(&value));
        return Windows::Media::MediaProperties::AudioEncodingProperties{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::AudioEffectDefinitions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_AudioEffectDefinitions(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>::CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrackStatics)->CreateFromEmbeddedAudioTrack(*(void**)(&embeddedAudioTrack), &value));
        return Windows::Media::Editing::BackgroundAudioTrack{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>::CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IBackgroundAudioTrackStatics)->CreateFromFileAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IEmbeddedAudioTrack<D>::GetAudioEncodingProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IEmbeddedAudioTrack)->GetAudioEncodingProperties(&value));
        return Windows::Media::MediaProperties::AudioEncodingProperties{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromStart() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_TrimTimeFromStart(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->put_TrimTimeFromStart(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromEnd() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_TrimTimeFromEnd(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->put_TrimTimeFromEnd(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::OriginalDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_OriginalDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::TrimmedDuration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_TrimmedDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::UserData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_UserData(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::Clone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->Clone(&result));
        return Windows::Media::Editing::MediaClip{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::StartTimeInComposition() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_StartTimeInComposition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::EndTimeInComposition() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_EndTimeInComposition(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::EmbeddedAudioTracks() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_EmbeddedAudioTracks(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Editing::EmbeddedAudioTrack>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::SelectedEmbeddedAudioTrackIndex() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_SelectedEmbeddedAudioTrackIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::SelectedEmbeddedAudioTrackIndex(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->put_SelectedEmbeddedAudioTrackIndex(value));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::Volume(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->put_Volume(value));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::Volume() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_Volume(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::GetVideoEncodingProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->GetVideoEncodingProperties(&value));
        return Windows::Media::MediaProperties::VideoEncodingProperties{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::AudioEffectDefinitions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_AudioEffectDefinitions(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClip<D>::VideoEffectDefinitions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClip)->get_VideoEffectDefinitions(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Effects::IVideoEffectDefinition>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClipStatics<D>::CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClipStatics)->CreateFromColor(impl::bind_in(color), impl::bind_in(originalDuration), &value));
        return Windows::Media::Editing::MediaClip{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClipStatics<D>::CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClipStatics)->CreateFromFileAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClipStatics<D>::CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClipStatics)->CreateFromImageFileAsync(*(void**)(&file), impl::bind_in(originalDuration), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaClipStatics2<D>::CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaClipStatics2)->CreateFromSurface(*(void**)(&surface), impl::bind_in(originalDuration), &value));
        return Windows::Media::Editing::MediaClip{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::Clips() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->get_Clips(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaClip>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::BackgroundAudioTracks() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->get_BackgroundAudioTracks(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Editing::BackgroundAudioTrack>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::UserData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->get_UserData(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::Clone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->Clone(&result));
        return Windows::Media::Editing::MediaComposition{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::SaveAsync(Windows::Storage::IStorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->SaveAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::GetThumbnailAsync(Windows::Foundation::TimeSpan const& timeFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->GetThumbnailAsync(impl::bind_in(timeFromStart), scaledWidth, scaledHeight, static_cast<int32_t>(framePrecision), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::GetThumbnailsAsync(param::async_iterable<Windows::Foundation::TimeSpan> const& timesFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->GetThumbnailsAsync(*(void**)(&timesFromStart), scaledWidth, scaledHeight, static_cast<int32_t>(framePrecision), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::ImageStream>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::RenderToFileAsync(Windows::Storage::IStorageFile const& destination) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->RenderToFileAsync(*(void**)(&destination), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->RenderToFileWithTrimmingPreferenceAsync(*(void**)(&destination), static_cast<int32_t>(trimmingPreference), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference, Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->RenderToFileWithProfileAsync(*(void**)(&destination), static_cast<int32_t>(trimmingPreference), *(void**)(&encodingProfile), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::CreateDefaultEncodingProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->CreateDefaultEncodingProfile(&value));
        return Windows::Media::MediaProperties::MediaEncodingProfile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::GenerateMediaStreamSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->GenerateMediaStreamSource(&value));
        return Windows::Media::Core::MediaStreamSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::GenerateMediaStreamSource(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->GenerateMediaStreamSourceWithProfile(*(void**)(&encodingProfile), &value));
        return Windows::Media::Core::MediaStreamSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition<D>::GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition)->GeneratePreviewMediaStreamSource(scaledWidth, scaledHeight, &value));
        return Windows::Media::Core::MediaStreamSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaComposition2<D>::OverlayLayers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaComposition2)->get_OverlayLayers(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlayLayer>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaCompositionStatics<D>::LoadAsync(Windows::Storage::StorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaCompositionStatics)->LoadAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Position() const
    {
        Windows::Foundation::Rect value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Position(Windows::Foundation::Rect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->put_Position(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Delay(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->put_Delay(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Delay() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Delay(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Opacity() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Opacity(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Opacity(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->put_Opacity(value));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Clone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->Clone(&result));
        return Windows::Media::Editing::MediaOverlay{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::Clip() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Clip(&value));
        return Windows::Media::Editing::MediaClip{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::AudioEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->get_AudioEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlay<D>::AudioEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlay)->put_AudioEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlayFactory<D>::Create(Windows::Media::Editing::MediaClip const& clip) const
    {
        void* mediaOverlay{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlayFactory)->Create(*(void**)(&clip), &mediaOverlay));
        return Windows::Media::Editing::MediaOverlay{ mediaOverlay, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlayFactory<D>::CreateWithPositionAndOpacity(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity) const
    {
        void* mediaOverlay{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlayFactory)->CreateWithPositionAndOpacity(*(void**)(&clip), impl::bind_in(position), opacity, &mediaOverlay));
        return Windows::Media::Editing::MediaOverlay{ mediaOverlay, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlayLayer<D>::Clone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlayLayer)->Clone(&result));
        return Windows::Media::Editing::MediaOverlayLayer{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlayLayer<D>::Overlays() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlayLayer)->get_Overlays(&value));
        return Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlay>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlayLayer<D>::CustomCompositorDefinition() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlayLayer)->get_CustomCompositorDefinition(&value));
        return Windows::Media::Effects::IVideoCompositorDefinition{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Editing_IMediaOverlayLayerFactory<D>::CreateWithCompositorDefinition(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) const
    {
        void* mediaOverlayLayer{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Editing::IMediaOverlayLayerFactory)->CreateWithCompositorDefinition(*(void**)(&compositorDefinition), &mediaOverlayLayer));
        return Windows::Media::Editing::MediaOverlayLayer{ mediaOverlayLayer, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Media::Editing::IBackgroundAudioTrack> : produce_base<D, Windows::Media::Editing::IBackgroundAudioTrack>
    {
        int32_t __stdcall get_TrimTimeFromStart(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimTimeFromStart());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TrimTimeFromStart(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromStart(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrimTimeFromEnd(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimTimeFromEnd());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TrimTimeFromEnd(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromEnd(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OriginalDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().OriginalDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrimmedDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimmedDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().UserData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Delay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Delay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Delay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Volume(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Volume(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Volume(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Volume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clone(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Editing::BackgroundAudioTrack>(this->shim().Clone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAudioEncodingProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().GetAudioEncodingProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AudioEffectDefinitions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition>>(this->shim().AudioEffectDefinitions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IBackgroundAudioTrackStatics> : produce_base<D, Windows::Media::Editing::IBackgroundAudioTrackStatics>
    {
        int32_t __stdcall CreateFromEmbeddedAudioTrack(void* embeddedAudioTrack, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Editing::BackgroundAudioTrack>(this->shim().CreateFromEmbeddedAudioTrack(*reinterpret_cast<Windows::Media::Editing::EmbeddedAudioTrack const*>(&embeddedAudioTrack)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromFileAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack>>(this->shim().CreateFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IEmbeddedAudioTrack> : produce_base<D, Windows::Media::Editing::IEmbeddedAudioTrack>
    {
        int32_t __stdcall GetAudioEncodingProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().GetAudioEncodingProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaClip> : produce_base<D, Windows::Media::Editing::IMediaClip>
    {
        int32_t __stdcall get_TrimTimeFromStart(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimTimeFromStart());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TrimTimeFromStart(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromStart(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrimTimeFromEnd(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimTimeFromEnd());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TrimTimeFromEnd(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromEnd(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OriginalDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().OriginalDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrimmedDuration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TrimmedDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().UserData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Editing::MediaClip>(this->shim().Clone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartTimeInComposition(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartTimeInComposition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndTimeInComposition(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().EndTimeInComposition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EmbeddedAudioTracks(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Editing::EmbeddedAudioTrack>>(this->shim().EmbeddedAudioTracks());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedEmbeddedAudioTrackIndex(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedEmbeddedAudioTrackIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SelectedEmbeddedAudioTrackIndex(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedEmbeddedAudioTrackIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Volume(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Volume(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Volume(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Volume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVideoEncodingProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().GetVideoEncodingProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AudioEffectDefinitions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition>>(this->shim().AudioEffectDefinitions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoEffectDefinitions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Effects::IVideoEffectDefinition>>(this->shim().VideoEffectDefinitions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaClipStatics> : produce_base<D, Windows::Media::Editing::IMediaClipStatics>
    {
        int32_t __stdcall CreateFromColor(struct struct_Windows_UI_Color color, int64_t originalDuration, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Editing::MediaClip>(this->shim().CreateFromColor(*reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&originalDuration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromFileAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip>>(this->shim().CreateFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromImageFileAsync(void* file, int64_t originalDuration, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip>>(this->shim().CreateFromImageFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&originalDuration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaClipStatics2> : produce_base<D, Windows::Media::Editing::IMediaClipStatics2>
    {
        int32_t __stdcall CreateFromSurface(void* surface, int64_t originalDuration, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Editing::MediaClip>(this->shim().CreateFromSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&originalDuration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaComposition> : produce_base<D, Windows::Media::Editing::IMediaComposition>
    {
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Clips(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaClip>>(this->shim().Clips());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundAudioTracks(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Editing::BackgroundAudioTrack>>(this->shim().BackgroundAudioTracks());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().UserData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Editing::MediaComposition>(this->shim().Clone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetThumbnailAsync(int64_t timeFromStart, int32_t scaledWidth, int32_t scaledHeight, int32_t framePrecision, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>>(this->shim().GetThumbnailAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeFromStart), scaledWidth, scaledHeight, *reinterpret_cast<Windows::Media::Editing::VideoFramePrecision const*>(&framePrecision)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetThumbnailsAsync(void* timesFromStart, int32_t scaledWidth, int32_t scaledHeight, int32_t framePrecision, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::ImageStream>>>(this->shim().GetThumbnailsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::TimeSpan> const*>(&timesFromStart), scaledWidth, scaledHeight, *reinterpret_cast<Windows::Media::Editing::VideoFramePrecision const*>(&framePrecision)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RenderToFileAsync(void* destination, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double>>(this->shim().RenderToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RenderToFileWithTrimmingPreferenceAsync(void* destination, int32_t trimmingPreference, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double>>(this->shim().RenderToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination), *reinterpret_cast<Windows::Media::Editing::MediaTrimmingPreference const*>(&trimmingPreference)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RenderToFileWithProfileAsync(void* destination, int32_t trimmingPreference, void* encodingProfile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double>>(this->shim().RenderToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination), *reinterpret_cast<Windows::Media::Editing::MediaTrimmingPreference const*>(&trimmingPreference), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateDefaultEncodingProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaEncodingProfile>(this->shim().CreateDefaultEncodingProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GenerateMediaStreamSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().GenerateMediaStreamSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GenerateMediaStreamSourceWithProfile(void* encodingProfile, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().GenerateMediaStreamSource(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().GeneratePreviewMediaStreamSource(scaledWidth, scaledHeight));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaComposition2> : produce_base<D, Windows::Media::Editing::IMediaComposition2>
    {
        int32_t __stdcall get_OverlayLayers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlayLayer>>(this->shim().OverlayLayers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaCompositionStatics> : produce_base<D, Windows::Media::Editing::IMediaCompositionStatics>
    {
        int32_t __stdcall LoadAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition>>(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaOverlay> : produce_base<D, Windows::Media::Editing::IMediaOverlay>
    {
        int32_t __stdcall get_Position(Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Position(Windows::Foundation::Rect value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Delay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Delay(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Delay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Opacity(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Opacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Opacity(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Editing::MediaOverlay>(this->shim().Clone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Clip(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Editing::MediaClip>(this->shim().Clip());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AudioEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AudioEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AudioEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaOverlayFactory> : produce_base<D, Windows::Media::Editing::IMediaOverlayFactory>
    {
        int32_t __stdcall Create(void* clip, void** mediaOverlay) noexcept final try
        {
            clear_abi(mediaOverlay);
            typename D::abi_guard guard(this->shim());
            *mediaOverlay = detach_from<Windows::Media::Editing::MediaOverlay>(this->shim().Create(*reinterpret_cast<Windows::Media::Editing::MediaClip const*>(&clip)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithPositionAndOpacity(void* clip, Windows::Foundation::Rect position, double opacity, void** mediaOverlay) noexcept final try
        {
            clear_abi(mediaOverlay);
            typename D::abi_guard guard(this->shim());
            *mediaOverlay = detach_from<Windows::Media::Editing::MediaOverlay>(this->shim().CreateWithPositionAndOpacity(*reinterpret_cast<Windows::Media::Editing::MediaClip const*>(&clip), *reinterpret_cast<Windows::Foundation::Rect const*>(&position), opacity));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaOverlayLayer> : produce_base<D, Windows::Media::Editing::IMediaOverlayLayer>
    {
        int32_t __stdcall Clone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Editing::MediaOverlayLayer>(this->shim().Clone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Overlays(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlay>>(this->shim().Overlays());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CustomCompositorDefinition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::IVideoCompositorDefinition>(this->shim().CustomCompositorDefinition());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Editing::IMediaOverlayLayerFactory> : produce_base<D, Windows::Media::Editing::IMediaOverlayLayerFactory>
    {
        int32_t __stdcall CreateWithCompositorDefinition(void* compositorDefinition, void** mediaOverlayLayer) noexcept final try
        {
            clear_abi(mediaOverlayLayer);
            typename D::abi_guard guard(this->shim());
            *mediaOverlayLayer = detach_from<Windows::Media::Editing::MediaOverlayLayer>(this->shim().CreateWithCompositorDefinition(*reinterpret_cast<Windows::Media::Effects::IVideoCompositorDefinition const*>(&compositorDefinition)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Media::Editing
{
    inline auto BackgroundAudioTrack::CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack)
    {
        return impl::call_factory<BackgroundAudioTrack, Windows::Media::Editing::IBackgroundAudioTrackStatics>([&](auto&& f) { return f.CreateFromEmbeddedAudioTrack(embeddedAudioTrack); });
    }
    inline auto BackgroundAudioTrack::CreateFromFileAsync(Windows::Storage::IStorageFile const& file)
    {
        return impl::call_factory<BackgroundAudioTrack, Windows::Media::Editing::IBackgroundAudioTrackStatics>([&](auto&& f) { return f.CreateFromFileAsync(file); });
    }
    inline auto MediaClip::CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration)
    {
        return impl::call_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics>([&](auto&& f) { return f.CreateFromColor(color, originalDuration); });
    }
    inline auto MediaClip::CreateFromFileAsync(Windows::Storage::IStorageFile const& file)
    {
        return impl::call_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics>([&](auto&& f) { return f.CreateFromFileAsync(file); });
    }
    inline auto MediaClip::CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration)
    {
        return impl::call_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics>([&](auto&& f) { return f.CreateFromImageFileAsync(file, originalDuration); });
    }
    inline auto MediaClip::CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration)
    {
        return impl::call_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics2>([&](auto&& f) { return f.CreateFromSurface(surface, originalDuration); });
    }
    inline MediaComposition::MediaComposition() :
        MediaComposition(impl::call_factory<MediaComposition>([](auto&& f) { return f.template ActivateInstance<MediaComposition>(); }))
    {
    }
    inline auto MediaComposition::LoadAsync(Windows::Storage::StorageFile const& file)
    {
        return impl::call_factory<MediaComposition, Windows::Media::Editing::IMediaCompositionStatics>([&](auto&& f) { return f.LoadAsync(file); });
    }
    inline MediaOverlay::MediaOverlay(Windows::Media::Editing::MediaClip const& clip) :
        MediaOverlay(impl::call_factory<MediaOverlay, Windows::Media::Editing::IMediaOverlayFactory>([&](auto&& f) { return f.Create(clip); }))
    {
    }
    inline MediaOverlay::MediaOverlay(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity) :
        MediaOverlay(impl::call_factory<MediaOverlay, Windows::Media::Editing::IMediaOverlayFactory>([&](auto&& f) { return f.CreateWithPositionAndOpacity(clip, position, opacity); }))
    {
    }
    inline MediaOverlayLayer::MediaOverlayLayer() :
        MediaOverlayLayer(impl::call_factory<MediaOverlayLayer>([](auto&& f) { return f.template ActivateInstance<MediaOverlayLayer>(); }))
    {
    }
    inline MediaOverlayLayer::MediaOverlayLayer(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) :
        MediaOverlayLayer(impl::call_factory<MediaOverlayLayer, Windows::Media::Editing::IMediaOverlayLayerFactory>([&](auto&& f) { return f.CreateWithCompositorDefinition(compositorDefinition); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Media::Editing::IBackgroundAudioTrack> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IBackgroundAudioTrack> {};
    template<> struct hash<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics> {};
    template<> struct hash<winrt::Windows::Media::Editing::IEmbeddedAudioTrack> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IEmbeddedAudioTrack> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaClip> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaClip> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaClipStatics> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaClipStatics> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaClipStatics2> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaClipStatics2> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaComposition> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaComposition> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaComposition2> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaComposition2> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaCompositionStatics> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaCompositionStatics> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlay> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaOverlay> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlayFactory> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaOverlayFactory> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlayLayer> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaOverlayLayer> {};
    template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory> : winrt::impl::hash_base<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory> {};
    template<> struct hash<winrt::Windows::Media::Editing::BackgroundAudioTrack> : winrt::impl::hash_base<winrt::Windows::Media::Editing::BackgroundAudioTrack> {};
    template<> struct hash<winrt::Windows::Media::Editing::EmbeddedAudioTrack> : winrt::impl::hash_base<winrt::Windows::Media::Editing::EmbeddedAudioTrack> {};
    template<> struct hash<winrt::Windows::Media::Editing::MediaClip> : winrt::impl::hash_base<winrt::Windows::Media::Editing::MediaClip> {};
    template<> struct hash<winrt::Windows::Media::Editing::MediaComposition> : winrt::impl::hash_base<winrt::Windows::Media::Editing::MediaComposition> {};
    template<> struct hash<winrt::Windows::Media::Editing::MediaOverlay> : winrt::impl::hash_base<winrt::Windows::Media::Editing::MediaOverlay> {};
    template<> struct hash<winrt::Windows::Media::Editing::MediaOverlayLayer> : winrt::impl::hash_base<winrt::Windows::Media::Editing::MediaOverlayLayer> {};
}
#endif
