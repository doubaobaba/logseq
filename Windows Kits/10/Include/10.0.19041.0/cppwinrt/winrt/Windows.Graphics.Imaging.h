// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Imaging_H
#define WINRT_Windows_Graphics_Imaging_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapBuffer<D>::GetPlaneCount() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapBuffer)->GetPlaneCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapBuffer<D>::GetPlaneDescription(int32_t index) const
    {
        Windows::Graphics::Imaging::BitmapPlaneDescription value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapBuffer)->GetPlaneDescription(index, put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::CodecId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_CodecId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::FileExtensions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_FileExtensions(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::MimeTypes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_MimeTypes(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::BitmapContainerProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->get_BitmapContainerProperties(&value));
        return Windows::Graphics::Imaging::BitmapPropertiesView{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::DecoderInformation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->get_DecoderInformation(&value));
        return Windows::Graphics::Imaging::BitmapCodecInformation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::FrameCount() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->get_FrameCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::GetPreviewAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->GetPreviewAsync(&asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::GetFrameAsync(uint32_t frameIndex) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->GetFrameAsync(frameIndex, &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::BmpDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_BmpDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::JpegDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_JpegDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::PngDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_PngDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::TiffDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_TiffDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::GifDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_GifDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::JpegXRDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_JpegXRDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::IcoDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_IcoDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::GetDecoderInformationEnumerator() const
    {
        void* decoderInformationEnumerator{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->GetDecoderInformationEnumerator(&decoderInformationEnumerator));
        return Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>{ decoderInformationEnumerator, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::CreateAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->CreateAsync(*(void**)(&stream), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::CreateAsync(winrt::guid const& decoderId, Windows::Storage::Streams::IRandomAccessStream const& stream) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->CreateWithIdAsync(impl::bind_in(decoderId), *(void**)(&stream), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics2<D>::HeifDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics2)->get_HeifDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapDecoderStatics2<D>::WebpDecoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics2)->get_WebpDecoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::EncoderInformation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_EncoderInformation(&value));
        return Windows::Graphics::Imaging::BitmapCodecInformation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::BitmapProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_BitmapProperties(&value));
        return Windows::Graphics::Imaging::BitmapProperties{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::BitmapContainerProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_BitmapContainerProperties(&value));
        return Windows::Graphics::Imaging::BitmapProperties{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::IsThumbnailGenerated() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_IsThumbnailGenerated(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::IsThumbnailGenerated(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->put_IsThumbnailGenerated(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailWidth() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_GeneratedThumbnailWidth(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailWidth(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->put_GeneratedThumbnailWidth(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailHeight() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_GeneratedThumbnailHeight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailHeight(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->put_GeneratedThumbnailHeight(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::BitmapTransform() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_BitmapTransform(&value));
        return Windows::Graphics::Imaging::BitmapTransform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::SetPixelData(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, array_view<uint8_t const> pixels) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->SetPixelData(static_cast<int32_t>(pixelFormat), static_cast<int32_t>(alphaMode), width, height, dpiX, dpiY, pixels.size(), get_abi(pixels)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GoToNextFrameAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->GoToNextFrameAsync(&asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GoToNextFrameAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->GoToNextFrameWithEncodingOptionsAsync(*(void**)(&encodingOptions), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::FlushAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->FlushAsync(&asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::BmpEncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_BmpEncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::JpegEncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_JpegEncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::PngEncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_PngEncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::TiffEncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_TiffEncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::GifEncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_GifEncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::JpegXREncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_JpegXREncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::GetEncoderInformationEnumerator() const
    {
        void* encoderInformationEnumerator{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->GetEncoderInformationEnumerator(&encoderInformationEnumerator));
        return Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>{ encoderInformationEnumerator, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateAsync(winrt::guid const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateAsync(impl::bind_in(encoderId), *(void**)(&stream), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateAsync(winrt::guid const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateWithEncodingOptionsAsync(impl::bind_in(encoderId), *(void**)(&stream), *(void**)(&encodingOptions), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateForTranscodingAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateForTranscodingAsync(*(void**)(&stream), *(void**)(&bitmapDecoder), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateForInPlacePropertyEncodingAsync(Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateForInPlacePropertyEncodingAsync(*(void**)(&bitmapDecoder), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderStatics2<D>::HeifEncoderId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics2)->get_HeifEncoderId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap<D>::SetSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap)->SetSoftwareBitmap(*(void**)(&bitmap)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::GetThumbnailAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->GetThumbnailAsync(&asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::BitmapProperties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_BitmapProperties(&value));
        return Windows::Graphics::Imaging::BitmapPropertiesView{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::BitmapPixelFormat() const
    {
        Windows::Graphics::Imaging::BitmapPixelFormat value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_BitmapPixelFormat(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::BitmapAlphaMode() const
    {
        Windows::Graphics::Imaging::BitmapAlphaMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_BitmapAlphaMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::DpiX() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_DpiX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::DpiY() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_DpiY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::PixelWidth() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_PixelWidth(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::PixelHeight() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_PixelHeight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::OrientedPixelWidth() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_OrientedPixelWidth(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::OrientedPixelHeight() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_OrientedPixelHeight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::GetPixelDataAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->GetPixelDataAsync(&asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrame<D>::GetPixelDataAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, Windows::Graphics::Imaging::BitmapTransform const& transform, Windows::Graphics::Imaging::ExifOrientationMode const& exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode const& colorManagementMode) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->GetPixelDataTransformedAsync(static_cast<int32_t>(pixelFormat), static_cast<int32_t>(alphaMode), *(void**)(&transform), static_cast<int32_t>(exifOrientationMode), static_cast<int32_t>(colorManagementMode), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap)->GetSoftwareBitmapAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap)->GetSoftwareBitmapConvertedAsync(static_cast<int32_t>(pixelFormat), static_cast<int32_t>(alphaMode), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, Windows::Graphics::Imaging::BitmapTransform const& transform, Windows::Graphics::Imaging::ExifOrientationMode const& exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode const& colorManagementMode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap)->GetSoftwareBitmapTransformedAsync(static_cast<int32_t>(pixelFormat), static_cast<int32_t>(alphaMode), *(void**)(&transform), static_cast<int32_t>(exifOrientationMode), static_cast<int32_t>(colorManagementMode), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapProperties<D>::SetPropertiesAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& propertiesToSet) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapProperties)->SetPropertiesAsync(*(void**)(&propertiesToSet), &asyncInfo));
        return Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapPropertiesView<D>::GetPropertiesAsync(param::async_iterable<hstring> const& propertiesToRetrieve) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapPropertiesView)->GetPropertiesAsync(*(void**)(&propertiesToRetrieve), &asyncInfo));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledWidth() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_ScaledWidth(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledWidth(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_ScaledWidth(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledHeight() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_ScaledHeight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledHeight(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_ScaledHeight(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::InterpolationMode() const
    {
        Windows::Graphics::Imaging::BitmapInterpolationMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_InterpolationMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_InterpolationMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Flip() const
    {
        Windows::Graphics::Imaging::BitmapFlip value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_Flip(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Flip(Windows::Graphics::Imaging::BitmapFlip const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_Flip(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Rotation() const
    {
        Windows::Graphics::Imaging::BitmapRotation value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_Rotation(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Rotation(Windows::Graphics::Imaging::BitmapRotation const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_Rotation(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Bounds() const
    {
        Windows::Graphics::Imaging::BitmapBounds value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_Bounds(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Bounds(Windows::Graphics::Imaging::BitmapBounds const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_Bounds(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTypedValue<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTypedValue)->get_Value(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTypedValue<D>::Type() const
    {
        Windows::Foundation::PropertyType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTypedValue)->get_Type(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IBitmapTypedValueFactory<D>::Create(Windows::Foundation::IInspectable const& value, Windows::Foundation::PropertyType const& type) const
    {
        void* bitmapTypedValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IBitmapTypedValueFactory)->Create(*(void**)(&value), static_cast<int32_t>(type), &bitmapTypedValue));
        return Windows::Graphics::Imaging::BitmapTypedValue{ bitmapTypedValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_IPixelDataProvider<D>::DetachPixelData() const
    {
        uint32_t pixelData_impl_size{};
        uint8_t* pixelData{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::IPixelDataProvider)->DetachPixelData(&pixelData_impl_size, &pixelData));
        return com_array<uint8_t>{ pixelData, pixelData_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::BitmapPixelFormat() const
    {
        Windows::Graphics::Imaging::BitmapPixelFormat value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_BitmapPixelFormat(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::BitmapAlphaMode() const
    {
        Windows::Graphics::Imaging::BitmapAlphaMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_BitmapAlphaMode(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::PixelWidth() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_PixelWidth(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::PixelHeight() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_PixelHeight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::IsReadOnly() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_IsReadOnly(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->put_DpiX(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiX() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_DpiX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->put_DpiY(value));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiY() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_DpiY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::LockBuffer(Windows::Graphics::Imaging::BitmapBufferAccessMode const& mode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->LockBuffer(static_cast<int32_t>(mode), &value));
        return Windows::Graphics::Imaging::BitmapBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::CopyTo(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->CopyTo(*(void**)(&bitmap)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::CopyFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->CopyFromBuffer(*(void**)(&buffer)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::CopyToBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->CopyToBuffer(*(void**)(&buffer)));
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::GetReadOnlyView() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->GetReadOnlyView(&value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapFactory<D>::Create(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapFactory)->Create(static_cast<int32_t>(format), width, height, &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapFactory<D>::CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapFactory)->CreateWithAlpha(static_cast<int32_t>(format), width, height, static_cast<int32_t>(alpha), &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::Copy(Windows::Graphics::Imaging::SoftwareBitmap const& source) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->Copy(*(void**)(&source), &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->Convert(*(void**)(&source), static_cast<int32_t>(format), &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->ConvertWithAlpha(*(void**)(&source), static_cast<int32_t>(format), static_cast<int32_t>(alpha), &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyFromBuffer(*(void**)(&source), static_cast<int32_t>(format), width, height, &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyWithAlphaFromBuffer(*(void**)(&source), static_cast<int32_t>(format), width, height, static_cast<int32_t>(alpha), &value));
        return Windows::Graphics::Imaging::SoftwareBitmap{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyFromSurfaceAsync(*(void**)(&surface), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyWithAlphaFromSurfaceAsync(*(void**)(&surface), static_cast<int32_t>(alpha), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapBuffer> : produce_base<D, Windows::Graphics::Imaging::IBitmapBuffer>
    {
        int32_t __stdcall GetPlaneCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().GetPlaneCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPlaneDescription(int32_t index, struct struct_Windows_Graphics_Imaging_BitmapPlaneDescription* value) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapPlaneDescription>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPlaneDescription>(this->shim().GetPlaneDescription(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapCodecInformation> : produce_base<D, Windows::Graphics::Imaging::IBitmapCodecInformation>
    {
        int32_t __stdcall get_CodecId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CodecId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileExtensions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().FileExtensions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MimeTypes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().MimeTypes());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapDecoder> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoder>
    {
        int32_t __stdcall get_BitmapContainerProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPropertiesView>(this->shim().BitmapContainerProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DecoderInformation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapCodecInformation>(this->shim().DecoderInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FrameCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().FrameCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPreviewAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>>(this->shim().GetPreviewAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFrameAsync(uint32_t frameIndex, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame>>(this->shim().GetFrameAsync(frameIndex));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapDecoderStatics> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoderStatics>
    {
        int32_t __stdcall get_BmpDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BmpDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JpegDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().JpegDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PngDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().PngDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TiffDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TiffDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GifDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GifDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JpegXRDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().JpegXRDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IcoDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().IcoDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDecoderInformationEnumerator(void** decoderInformationEnumerator) noexcept final try
        {
            clear_abi(decoderInformationEnumerator);
            typename D::abi_guard guard(this->shim());
            *decoderInformationEnumerator = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>>(this->shim().GetDecoderInformationEnumerator());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateAsync(void* stream, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>>(this->shim().CreateAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithIdAsync(winrt::guid decoderId, void* stream, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>>(this->shim().CreateAsync(*reinterpret_cast<winrt::guid const*>(&decoderId), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapDecoderStatics2> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoderStatics2>
    {
        int32_t __stdcall get_HeifDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HeifDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WebpDecoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().WebpDecoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapEncoder> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoder>
    {
        int32_t __stdcall get_EncoderInformation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapCodecInformation>(this->shim().EncoderInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapProperties>(this->shim().BitmapProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapContainerProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapProperties>(this->shim().BitmapContainerProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsThumbnailGenerated(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsThumbnailGenerated());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsThumbnailGenerated(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsThumbnailGenerated(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GeneratedThumbnailWidth(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GeneratedThumbnailWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GeneratedThumbnailWidth(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeneratedThumbnailWidth(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GeneratedThumbnailHeight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GeneratedThumbnailHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GeneratedThumbnailHeight(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeneratedThumbnailHeight(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapTransform(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapTransform>(this->shim().BitmapTransform());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPixelData(int32_t pixelFormat, int32_t alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, uint32_t __pixelsSize, uint8_t* pixels) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelData(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode), width, height, dpiX, dpiY, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(pixels), reinterpret_cast<uint8_t const *>(pixels) + __pixelsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GoToNextFrameAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().GoToNextFrameAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GoToNextFrameWithEncodingOptionsAsync(void* encodingOptions, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().GoToNextFrameAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const*>(&encodingOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FlushAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FlushAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderStatics> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderStatics>
    {
        int32_t __stdcall get_BmpEncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BmpEncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JpegEncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().JpegEncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PngEncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().PngEncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TiffEncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TiffEncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GifEncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GifEncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JpegXREncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().JpegXREncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetEncoderInformationEnumerator(void** encoderInformationEnumerator) noexcept final try
        {
            clear_abi(encoderInformationEnumerator);
            typename D::abi_guard guard(this->shim());
            *encoderInformationEnumerator = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>>(this->shim().GetEncoderInformationEnumerator());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateAsync(winrt::guid encoderId, void* stream, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateAsync(*reinterpret_cast<winrt::guid const*>(&encoderId), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithEncodingOptionsAsync(winrt::guid encoderId, void* stream, void* encodingOptions, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateAsync(*reinterpret_cast<winrt::guid const*>(&encoderId), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const*>(&encodingOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateForTranscodingAsync(void* stream, void* bitmapDecoder, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateForTranscodingAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Graphics::Imaging::BitmapDecoder const*>(&bitmapDecoder)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateForInPlacePropertyEncodingAsync(void* bitmapDecoder, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateForInPlacePropertyEncodingAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapDecoder const*>(&bitmapDecoder)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderStatics2> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderStatics2>
    {
        int32_t __stdcall get_HeifEncoderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HeifEncoderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
    {
        int32_t __stdcall SetSoftwareBitmap(void* bitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapFrame> : produce_base<D, Windows::Graphics::Imaging::IBitmapFrame>
    {
        int32_t __stdcall GetThumbnailAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>>(this->shim().GetThumbnailAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapProperties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPropertiesView>(this->shim().BitmapProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapPixelFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapAlphaMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PixelWidth(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PixelWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PixelHeight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PixelHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OrientedPixelWidth(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OrientedPixelWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OrientedPixelHeight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OrientedPixelHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPixelDataAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>>(this->shim().GetPixelDataAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPixelDataTransformedAsync(int32_t pixelFormat, int32_t alphaMode, void* transform, int32_t exifOrientationMode, int32_t colorManagementMode, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>>(this->shim().GetPixelDataAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode), *reinterpret_cast<Windows::Graphics::Imaging::BitmapTransform const*>(&transform), *reinterpret_cast<Windows::Graphics::Imaging::ExifOrientationMode const*>(&exifOrientationMode), *reinterpret_cast<Windows::Graphics::Imaging::ColorManagementMode const*>(&colorManagementMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        int32_t __stdcall GetSoftwareBitmapAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().GetSoftwareBitmapAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSoftwareBitmapConvertedAsync(int32_t pixelFormat, int32_t alphaMode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().GetSoftwareBitmapAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSoftwareBitmapTransformedAsync(int32_t pixelFormat, int32_t alphaMode, void* transform, int32_t exifOrientationMode, int32_t colorManagementMode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().GetSoftwareBitmapAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode), *reinterpret_cast<Windows::Graphics::Imaging::BitmapTransform const*>(&transform), *reinterpret_cast<Windows::Graphics::Imaging::ExifOrientationMode const*>(&exifOrientationMode), *reinterpret_cast<Windows::Graphics::Imaging::ColorManagementMode const*>(&colorManagementMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapProperties> : produce_base<D, Windows::Graphics::Imaging::IBitmapProperties>
    {
        int32_t __stdcall SetPropertiesAsync(void* propertiesToSet, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const*>(&propertiesToSet)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapPropertiesView> : produce_base<D, Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        int32_t __stdcall GetPropertiesAsync(void* propertiesToRetrieve, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet>>(this->shim().GetPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapTransform> : produce_base<D, Windows::Graphics::Imaging::IBitmapTransform>
    {
        int32_t __stdcall get_ScaledWidth(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ScaledWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaledWidth(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaledWidth(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaledHeight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ScaledHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaledHeight(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaledHeight(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterpolationMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapInterpolationMode>(this->shim().InterpolationMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InterpolationMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Windows::Graphics::Imaging::BitmapInterpolationMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Flip(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapFlip>(this->shim().Flip());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Flip(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Flip(*reinterpret_cast<Windows::Graphics::Imaging::BitmapFlip const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rotation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapRotation>(this->shim().Rotation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Rotation(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(*reinterpret_cast<Windows::Graphics::Imaging::BitmapRotation const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bounds(struct struct_Windows_Graphics_Imaging_BitmapBounds* value) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapBounds>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapBounds>(this->shim().Bounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Bounds(struct struct_Windows_Graphics_Imaging_BitmapBounds value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Graphics::Imaging::BitmapBounds const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapTypedValue> : produce_base<D, Windows::Graphics::Imaging::IBitmapTypedValue>
    {
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::PropertyType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IBitmapTypedValueFactory> : produce_base<D, Windows::Graphics::Imaging::IBitmapTypedValueFactory>
    {
        int32_t __stdcall Create(void* value, int32_t type, void** bitmapTypedValue) noexcept final try
        {
            clear_abi(bitmapTypedValue);
            typename D::abi_guard guard(this->shim());
            *bitmapTypedValue = detach_from<Windows::Graphics::Imaging::BitmapTypedValue>(this->shim().Create(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::Foundation::PropertyType const*>(&type)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::IPixelDataProvider> : produce_base<D, Windows::Graphics::Imaging::IPixelDataProvider>
    {
        int32_t __stdcall DetachPixelData(uint32_t* __pixelDataSize, uint8_t** pixelData) noexcept final try
        {
            clear_abi(pixelData);
            typename D::abi_guard guard(this->shim());
            std::tie(*__pixelDataSize, *pixelData) = detach_abi(this->shim().DetachPixelData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmap>
    {
        int32_t __stdcall get_BitmapPixelFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BitmapAlphaMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PixelWidth(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PixelWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PixelHeight(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PixelHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsReadOnly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsReadOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DpiX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DpiY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DpiY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LockBuffer(int32_t mode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapBuffer>(this->shim().LockBuffer(*reinterpret_cast<Windows::Graphics::Imaging::BitmapBufferAccessMode const*>(&mode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyTo(void* bitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyTo(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyFromBuffer(void* buffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyToBuffer(void* buffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyToBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetReadOnlyView(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().GetReadOnlyView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmapFactory> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmapFactory>
    {
        int32_t __stdcall Create(int32_t format, int32_t width, int32_t height, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Create(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithAlpha(int32_t format, int32_t width, int32_t height, int32_t alpha, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().CreateWithAlpha(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height, *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmapStatics> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmapStatics>
    {
        int32_t __stdcall Copy(void* source, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Copy(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&source)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Convert(void* source, int32_t format, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Convert(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConvertWithAlpha(void* source, int32_t format, int32_t alpha, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Convert(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCopyFromBuffer(void* source, int32_t format, int32_t width, int32_t height, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().CreateCopyFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCopyWithAlphaFromBuffer(void* source, int32_t format, int32_t width, int32_t height, int32_t alpha, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().CreateCopyFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height, *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCopyFromSurfaceAsync(void* surface, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().CreateCopyFromSurfaceAsync(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCopyWithAlphaFromSurfaceAsync(void* surface, int32_t alpha, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().CreateCopyFromSurfaceAsync(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Graphics::Imaging
{
    inline auto BitmapDecoder::BmpDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.BmpDecoderId(); });
    }
    inline auto BitmapDecoder::JpegDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.JpegDecoderId(); });
    }
    inline auto BitmapDecoder::PngDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.PngDecoderId(); });
    }
    inline auto BitmapDecoder::TiffDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.TiffDecoderId(); });
    }
    inline auto BitmapDecoder::GifDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.GifDecoderId(); });
    }
    inline auto BitmapDecoder::JpegXRDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.JpegXRDecoderId(); });
    }
    inline auto BitmapDecoder::IcoDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.IcoDecoderId(); });
    }
    inline auto BitmapDecoder::GetDecoderInformationEnumerator()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.GetDecoderInformationEnumerator(); });
    }
    inline auto BitmapDecoder::CreateAsync(Windows::Storage::Streams::IRandomAccessStream const& stream)
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.CreateAsync(stream); });
    }
    inline auto BitmapDecoder::CreateAsync(winrt::guid const& decoderId, Windows::Storage::Streams::IRandomAccessStream const& stream)
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>([&](auto&& f) { return f.CreateAsync(decoderId, stream); });
    }
    inline auto BitmapDecoder::HeifDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics2>([&](auto&& f) { return f.HeifDecoderId(); });
    }
    inline auto BitmapDecoder::WebpDecoderId()
    {
        return impl::call_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics2>([&](auto&& f) { return f.WebpDecoderId(); });
    }
    inline auto BitmapEncoder::BmpEncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.BmpEncoderId(); });
    }
    inline auto BitmapEncoder::JpegEncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.JpegEncoderId(); });
    }
    inline auto BitmapEncoder::PngEncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.PngEncoderId(); });
    }
    inline auto BitmapEncoder::TiffEncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.TiffEncoderId(); });
    }
    inline auto BitmapEncoder::GifEncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.GifEncoderId(); });
    }
    inline auto BitmapEncoder::JpegXREncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.JpegXREncoderId(); });
    }
    inline auto BitmapEncoder::GetEncoderInformationEnumerator()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.GetEncoderInformationEnumerator(); });
    }
    inline auto BitmapEncoder::CreateAsync(winrt::guid const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream)
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.CreateAsync(encoderId, stream); });
    }
    inline auto BitmapEncoder::CreateAsync(winrt::guid const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions)
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.CreateAsync(encoderId, stream, encodingOptions); });
    }
    inline auto BitmapEncoder::CreateForTranscodingAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder)
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.CreateForTranscodingAsync(stream, bitmapDecoder); });
    }
    inline auto BitmapEncoder::CreateForInPlacePropertyEncodingAsync(Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder)
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>([&](auto&& f) { return f.CreateForInPlacePropertyEncodingAsync(bitmapDecoder); });
    }
    inline auto BitmapEncoder::HeifEncoderId()
    {
        return impl::call_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics2>([&](auto&& f) { return f.HeifEncoderId(); });
    }
    inline BitmapPropertySet::BitmapPropertySet() :
        BitmapPropertySet(impl::call_factory<BitmapPropertySet>([](auto&& f) { return f.template ActivateInstance<BitmapPropertySet>(); }))
    {
    }
    inline BitmapTransform::BitmapTransform() :
        BitmapTransform(impl::call_factory<BitmapTransform>([](auto&& f) { return f.template ActivateInstance<BitmapTransform>(); }))
    {
    }
    inline BitmapTypedValue::BitmapTypedValue(Windows::Foundation::IInspectable const& value, Windows::Foundation::PropertyType const& type) :
        BitmapTypedValue(impl::call_factory<BitmapTypedValue, Windows::Graphics::Imaging::IBitmapTypedValueFactory>([&](auto&& f) { return f.Create(value, type); }))
    {
    }
    inline SoftwareBitmap::SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) :
        SoftwareBitmap(impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapFactory>([&](auto&& f) { return f.Create(format, width, height); }))
    {
    }
    inline SoftwareBitmap::SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) :
        SoftwareBitmap(impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapFactory>([&](auto&& f) { return f.CreateWithAlpha(format, width, height, alpha); }))
    {
    }
    inline auto SoftwareBitmap::Copy(Windows::Graphics::Imaging::SoftwareBitmap const& source)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.Copy(source); });
    }
    inline auto SoftwareBitmap::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.Convert(source, format); });
    }
    inline auto SoftwareBitmap::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.Convert(source, format, alpha); });
    }
    inline auto SoftwareBitmap::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.CreateCopyFromBuffer(source, format, width, height); });
    }
    inline auto SoftwareBitmap::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.CreateCopyFromBuffer(source, format, width, height, alpha); });
    }
    inline auto SoftwareBitmap::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.CreateCopyFromSurfaceAsync(surface); });
    }
    inline auto SoftwareBitmap::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha)
    {
        return impl::call_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>([&](auto&& f) { return f.CreateCopyFromSurfaceAsync(surface, alpha); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapBuffer> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapBuffer> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapDecoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapDecoder> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoder> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapFrame> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapProperties> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapTransform> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapTransform> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapTypedValue> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapTypedValue> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::IPixelDataProvider> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IPixelDataProvider> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::ISoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ISoftwareBitmap> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapBuffer> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapBuffer> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapCodecInformation> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapCodecInformation> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapDecoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapDecoder> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapEncoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapEncoder> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapFrame> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapProperties> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapPropertiesView> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapPropertiesView> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapPropertySet> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapPropertySet> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapTransform> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapTransform> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapTypedValue> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapTypedValue> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::ImageStream> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ImageStream> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::PixelDataProvider> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::PixelDataProvider> {};
    template<> struct hash<winrt::Windows::Graphics::Imaging::SoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::SoftwareBitmap> {};
}
#endif
