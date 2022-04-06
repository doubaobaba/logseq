// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_BackgroundTransfer_H
#define WINRT_Windows_Networking_BackgroundTransfer_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Networking.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.Web.2.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownload(*(void**)(&uri), *(void**)(&resultFile), &operation));
        return Windows::Networking::BackgroundTransfer::DownloadOperation{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::IStorageFile const& requestBodyFile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownloadFromFile(*(void**)(&uri), *(void**)(&resultFile), *(void**)(&requestBodyFile), &operation));
        return Windows::Networking::BackgroundTransfer::DownloadOperation{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownloadAsync(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::Streams::IInputStream const& requestBodyStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownloadAsync(*(void**)(&uri), *(void**)(&resultFile), *(void**)(&requestBodyStream), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::TransferGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_TransferGroup(&value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_TransferGroup(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessToastNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_SuccessToastNotification(&value));
        return Windows::UI::Notifications::ToastNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_SuccessToastNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureToastNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_FailureToastNotification(&value));
        return Windows::UI::Notifications::ToastNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_FailureToastNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessTileNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_SuccessTileNotification(&value));
        return Windows::UI::Notifications::TileNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_SuccessTileNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureTileNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_FailureTileNotification(&value));
        return Windows::UI::Notifications::TileNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_FailureTileNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3<D>::CompletionGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader3)->get_CompletionGroup(&value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory<D>::CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const
    {
        void* backgroundDownloader{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory)->CreateWithCompletionGroup(*(void**)(&completionGroup), &backgroundDownloader));
        return Windows::Networking::BackgroundTransfer::BackgroundDownloader{ backgroundDownloader, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>::GetCurrentDownloadsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods)->GetCurrentDownloadsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>::GetCurrentDownloadsAsync(param::hstring const& group) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods)->GetCurrentDownloadsForGroupAsync(*(void**)(&group), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2<D>::GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2)->GetCurrentDownloadsForTransferGroupAsync(*(void**)(&group), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent<D>::RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent)->RequestUnconstrainedDownloadsAsync(*(void**)(&operations), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->SetRequestHeader(*(void**)(&headerName), *(void**)(&headerValue)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ServerCredential() const
    {
        void* credential{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_ServerCredential(&credential));
        return Windows::Security::Credentials::PasswordCredential{ credential, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& credential) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_ServerCredential(*(void**)(&credential)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ProxyCredential() const
    {
        void* credential{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_ProxyCredential(&credential));
        return Windows::Security::Credentials::PasswordCredential{ credential, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& credential) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_ProxyCredential(*(void**)(&credential)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Method() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_Method(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Method(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_Method(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Group() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_Group(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Group(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_Group(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::CostPolicy() const
    {
        Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_CostPolicy(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_CostPolicy(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::Trigger() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->get_Trigger(&value));
        return Windows::ApplicationModel::Background::IBackgroundTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::IsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::Enable() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->Enable());
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>::Downloads() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails)->get_Downloads(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>::Uploads() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails)->get_Uploads(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetHeader(param::hstring const& headerName, param::hstring const& headerValue) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetHeader(*(void**)(&headerName), *(void**)(&headerValue)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetText(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetFile(Windows::Storage::IStorageFile const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetFile(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>::CreateWithName(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory)->CreateWithName(*(void**)(&name), &value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>::CreateWithNameAndFileName(param::hstring const& name, param::hstring const& fileName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory)->CreateWithNameAndFileName(*(void**)(&name), *(void**)(&fileName), &value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods<D>::GetStatus(int32_t hresult) const
    {
        Windows::Web::WebErrorStatus status;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods)->GetStatus(hresult, put_abi(status)));
        return status;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::TransferBehavior() const
    {
        Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->get_TransferBehavior(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->put_TransferBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics<D>::CreateGroup(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics)->CreateGroup(*(void**)(&name), &value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Guid() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Guid(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::RequestedUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_RequestedUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Method() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Method(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Group() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Group(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::CostPolicy() const
    {
        Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_CostPolicy(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->put_CostPolicy(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::GetResultStreamAt(uint64_t position) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->GetResultStreamAt(position, &value));
        return Windows::Storage::Streams::IInputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::GetResponseInformation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->GetResponseInformation(&value));
        return Windows::Networking::BackgroundTransfer::ResponseInformation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>::Priority() const
    {
        Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority)->get_Priority(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>::Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority)->put_Priority(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>::WasDownloadRestarted() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs)->get_WasDownloadRestarted(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>::AddedRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs)->get_AddedRanges(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUpload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& sourceFile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUpload(*(void**)(&uri), *(void**)(&sourceFile), &operation));
        return Windows::Networking::BackgroundTransfer::UploadOperation{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadFromStreamAsync(Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IInputStream const& sourceStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadFromStreamAsync(*(void**)(&uri), *(void**)(&sourceStream), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithFormDataAndAutoBoundaryAsync(*(void**)(&uri), *(void**)(&parts), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithSubTypeAsync(*(void**)(&uri), *(void**)(&parts), *(void**)(&subType), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType, param::hstring const& boundary) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithSubTypeAndBoundaryAsync(*(void**)(&uri), *(void**)(&parts), *(void**)(&subType), *(void**)(&boundary), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::TransferGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_TransferGroup(&value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_TransferGroup(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessToastNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_SuccessToastNotification(&value));
        return Windows::UI::Notifications::ToastNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_SuccessToastNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureToastNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_FailureToastNotification(&value));
        return Windows::UI::Notifications::ToastNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_FailureToastNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessTileNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_SuccessTileNotification(&value));
        return Windows::UI::Notifications::TileNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_SuccessTileNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureTileNotification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_FailureTileNotification(&value));
        return Windows::UI::Notifications::TileNotification{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_FailureTileNotification(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3<D>::CompletionGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader3)->get_CompletionGroup(&value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory<D>::CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const
    {
        void* backgroundUploader{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory)->CreateWithCompletionGroup(*(void**)(&completionGroup), &backgroundUploader));
        return Windows::Networking::BackgroundTransfer::BackgroundUploader{ backgroundUploader, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>::GetCurrentUploadsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods)->GetCurrentUploadsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>::GetCurrentUploadsAsync(param::hstring const& group) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods)->GetCurrentUploadsForGroupAsync(*(void**)(&group), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2<D>::GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2)->GetCurrentUploadsForTransferGroupAsync(*(void**)(&group), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent<D>::RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent)->RequestUnconstrainedUploadsAsync(*(void**)(&operations), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::ContentUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->get_ContentUris(&value));
        return Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::IndirectContentUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->put_IndirectContentUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::IndirectContentUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->get_IndirectContentUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime<D>::LastSuccessfulPrefetchTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcherTime)->get_LastSuccessfulPrefetchTime(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::ResultFile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->get_ResultFile(&value));
        return Windows::Storage::IStorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Progress() const
    {
        Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->get_Progress(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::StartAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->StartAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::AttachAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->AttachAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Pause() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->Pause());
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Resume() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->Resume());
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2<D>::TransferGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation2)->get_TransferGroup(&value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::IsRandomAccessRequired() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->get_IsRandomAccessRequired(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::IsRandomAccessRequired(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->put_IsRandomAccessRequired(value));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::GetResultRandomAccessStreamReference() const
    {
        void* stream{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->GetResultRandomAccessStreamReference(&stream));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ stream, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::GetDownloadedRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->GetDownloadedRanges(&value));
        return Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded(Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const& eventHandler) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->add_RangesDownloaded(*(void**)(&eventHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded_revoker consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const& eventHandler) const
    {
        return impl::make_event_revoker<D, RangesDownloaded_revoker>(this, RangesDownloaded(eventHandler));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->remove_RangesDownloaded(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RequestedUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->put_RequestedUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RecoverableWebErrorStatuses() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->get_RecoverableWebErrorStatuses(&value));
        return Windows::Foundation::Collections::IVector<Windows::Web::WebErrorStatus>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::CurrentWebErrorStatus() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->get_CurrentWebErrorStatus(&value));
        return Windows::Foundation::IReference<Windows::Web::WebErrorStatus>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation4<D>::MakeCurrentInTransferGroup() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation4)->MakeCurrentInTransferGroup());
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation5<D>::SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation5)->SetRequestHeader(*(void**)(&headerName), *(void**)(&headerValue)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IDownloadOperation5<D>::RemoveRequestHeader(param::hstring const& headerName) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation5)->RemoveRequestHeader(*(void**)(&headerName)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::IsResumable() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_IsResumable(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::ActualUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_ActualUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::StatusCode() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_StatusCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::Headers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_Headers(&value));
        return Windows::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult<D>::IsUnconstrained() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult)->get_IsUnconstrained(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::SourceFile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->get_SourceFile(&value));
        return Windows::Storage::IStorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::Progress() const
    {
        Windows::Networking::BackgroundTransfer::BackgroundUploadProgress value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->get_Progress(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::StartAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->StartAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::AttachAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->AttachAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation2<D>::TransferGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation2)->get_TransferGroup(&value));
        return Windows::Networking::BackgroundTransfer::BackgroundTransferGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation3<D>::MakeCurrentInTransferGroup() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation3)->MakeCurrentInTransferGroup());
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation4<D>::SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation4)->SetRequestHeader(*(void**)(&headerName), *(void**)(&headerValue)));
    }
    template <typename D> auto consume_Windows_Networking_BackgroundTransfer_IUploadOperation4<D>::RemoveRequestHeader(param::hstring const& headerName) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation4)->RemoveRequestHeader(*(void**)(&headerName)));
    }
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
    {
        int32_t __stdcall CreateDownload(void* uri, void* resultFile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Networking::BackgroundTransfer::DownloadOperation>(this->shim().CreateDownload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateDownloadFromFile(void* uri, void* resultFile, void* requestBodyFile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Networking::BackgroundTransfer::DownloadOperation>(this->shim().CreateDownload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&requestBodyFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateDownloadAsync(void* uri, void* resultFile, void* requestBodyStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().CreateDownloadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&requestBodyStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
    {
        int32_t __stdcall get_TransferGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransferGroup(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuccessToastNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().SuccessToastNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SuccessToastNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureToastNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().FailureToastNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FailureToastNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuccessTileNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().SuccessTileNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SuccessTileNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureTileNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().FailureTileNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FailureTileNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
    {
        int32_t __stdcall get_CompletionGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>(this->shim().CompletionGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
    {
        int32_t __stdcall CreateWithCompletionGroup(void* completionGroup, void** backgroundDownloader) noexcept final try
        {
            clear_abi(backgroundDownloader);
            typename D::abi_guard guard(this->shim());
            *backgroundDownloader = detach_from<Windows::Networking::BackgroundTransfer::BackgroundDownloader>(this->shim().CreateWithCompletionGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const*>(&completionGroup)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
    {
        int32_t __stdcall GetCurrentDownloadsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>>(this->shim().GetCurrentDownloadsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentDownloadsForGroupAsync(void* group, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>>(this->shim().GetCurrentDownloadsAsync(*reinterpret_cast<hstring const*>(&group)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
    {
        int32_t __stdcall GetCurrentDownloadsForTransferGroupAsync(void* group, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>>(this->shim().GetCurrentDownloadsForTransferGroupAsync(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&group)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
    {
        int32_t __stdcall RequestUnconstrainedDownloadsAsync(void* operations, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>>(this->shim().RequestUnconstrainedDownloadsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const*>(&operations)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
    {
        int32_t __stdcall SetRequestHeader(void* headerName, void* headerValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCredential(void** credential) noexcept final try
        {
            clear_abi(credential);
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ServerCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ServerCredential(void* credential) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProxyCredential(void** credential) noexcept final try
        {
            clear_abi(credential);
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ProxyCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProxyCredential(void* credential) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Method(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Method());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Method(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Method(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Group(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Group());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Group(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CostPolicy(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>(this->shim().CostPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CostPolicy(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CostPolicy(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
    {
        int32_t __stdcall get_Trigger(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::IBackgroundTrigger>(this->shim().Trigger());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Enable() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
    {
        int32_t __stdcall get_Downloads(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().Downloads());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uploads(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().Uploads());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
    {
        int32_t __stdcall SetHeader(void* headerName, void* headerValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetFile(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
    {
        int32_t __stdcall CreateWithName(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>(this->shim().CreateWithName(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithNameAndFileName(void* name, void* fileName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>(this->shim().CreateWithNameAndFileName(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&fileName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
    {
        int32_t __stdcall GetStatus(int32_t hresult, int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Web::WebErrorStatus>(this->shim().GetStatus(hresult));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransferBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>(this->shim().TransferBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransferBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferBehavior(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
    {
        int32_t __stdcall CreateGroup(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().CreateGroup(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
    {
        int32_t __stdcall get_Guid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Guid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestedUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().RequestedUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Method(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Method());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Group(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Group());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CostPolicy(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>(this->shim().CostPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CostPolicy(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CostPolicy(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetResultStreamAt(uint64_t position, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetResultStreamAt(position));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetResponseInformation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::ResponseInformation>(this->shim().GetResponseInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
    {
        int32_t __stdcall get_Priority(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>(this->shim().Priority());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Priority(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
    {
        int32_t __stdcall get_WasDownloadRestarted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().WasDownloadRestarted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AddedRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>>(this->shim().AddedRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader>
    {
        int32_t __stdcall CreateUpload(void* uri, void* sourceFile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Networking::BackgroundTransfer::UploadOperation>(this->shim().CreateUpload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&sourceFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateUploadFromStreamAsync(void* uri, void* sourceStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadFromStreamAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&sourceStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateUploadWithFormDataAndAutoBoundaryAsync(void* uri, void* parts, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateUploadWithSubTypeAsync(void* uri, void* parts, void* subType, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts), *reinterpret_cast<hstring const*>(&subType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateUploadWithSubTypeAndBoundaryAsync(void* uri, void* parts, void* subType, void* boundary, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts), *reinterpret_cast<hstring const*>(&subType), *reinterpret_cast<hstring const*>(&boundary)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
    {
        int32_t __stdcall get_TransferGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransferGroup(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuccessToastNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().SuccessToastNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SuccessToastNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureToastNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().FailureToastNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FailureToastNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuccessTileNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().SuccessTileNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SuccessTileNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureTileNotification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().FailureTileNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FailureTileNotification(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader3> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
    {
        int32_t __stdcall get_CompletionGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>(this->shim().CompletionGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
    {
        int32_t __stdcall CreateWithCompletionGroup(void* completionGroup, void** backgroundUploader) noexcept final try
        {
            clear_abi(backgroundUploader);
            typename D::abi_guard guard(this->shim());
            *backgroundUploader = detach_from<Windows::Networking::BackgroundTransfer::BackgroundUploader>(this->shim().CreateWithCompletionGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const*>(&completionGroup)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
    {
        int32_t __stdcall GetCurrentUploadsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>>(this->shim().GetCurrentUploadsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentUploadsForGroupAsync(void* group, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>>(this->shim().GetCurrentUploadsAsync(*reinterpret_cast<hstring const*>(&group)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
    {
        int32_t __stdcall GetCurrentUploadsForTransferGroupAsync(void* group, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>>(this->shim().GetCurrentUploadsForTransferGroupAsync(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&group)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
    {
        int32_t __stdcall RequestUnconstrainedUploadsAsync(void* operations, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>>(this->shim().RequestUnconstrainedUploadsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> const*>(&operations)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IContentPrefetcher> : produce_base<D, Windows::Networking::BackgroundTransfer::IContentPrefetcher>
    {
        int32_t __stdcall get_ContentUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>>(this->shim().ContentUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IndirectContentUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndirectContentUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IndirectContentUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().IndirectContentUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> : produce_base<D, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
    {
        int32_t __stdcall get_LastSuccessfulPrefetchTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().LastSuccessfulPrefetchTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation>
    {
        int32_t __stdcall get_ResultFile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().ResultFile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(struct struct_Windows_Networking_BackgroundTransfer_BackgroundDownloadProgress* value) noexcept final try
        {
            zero_abi<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().StartAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AttachAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().AttachAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Pause() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Resume() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation2> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation2>
    {
        int32_t __stdcall get_TransferGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation3> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation3>
    {
        int32_t __stdcall get_IsRandomAccessRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRandomAccessRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsRandomAccessRequired(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRandomAccessRequired(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetResultRandomAccessStreamReference(void** stream) noexcept final try
        {
            clear_abi(stream);
            typename D::abi_guard guard(this->shim());
            *stream = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().GetResultRandomAccessStreamReference());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDownloadedRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>>(this->shim().GetDownloadedRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_RangesDownloaded(void* eventHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().RangesDownloaded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RangesDownloaded(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RangesDownloaded(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall put_RequestedUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RecoverableWebErrorStatuses(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::WebErrorStatus>>(this->shim().RecoverableWebErrorStatuses());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentWebErrorStatus(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Web::WebErrorStatus>>(this->shim().CurrentWebErrorStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation4> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation4>
    {
        int32_t __stdcall MakeCurrentInTransferGroup() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakeCurrentInTransferGroup();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation5> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation5>
    {
        int32_t __stdcall SetRequestHeader(void* headerName, void* headerValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveRequestHeader(void* headerName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveRequestHeader(*reinterpret_cast<hstring const*>(&headerName));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IResponseInformation> : produce_base<D, Windows::Networking::BackgroundTransfer::IResponseInformation>
    {
        int32_t __stdcall get_IsResumable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsResumable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActualUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ActualUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StatusCode(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().StatusCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Headers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().Headers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> : produce_base<D, Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
    {
        int32_t __stdcall get_IsUnconstrained(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUnconstrained());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation>
    {
        int32_t __stdcall get_SourceFile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().SourceFile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(struct struct_Windows_Networking_BackgroundTransfer_BackgroundUploadProgress* value) noexcept final try
        {
            zero_abi<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().StartAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AttachAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().AttachAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation2> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation2>
    {
        int32_t __stdcall get_TransferGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation3> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation3>
    {
        int32_t __stdcall MakeCurrentInTransferGroup() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakeCurrentInTransferGroup();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation4> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation4>
    {
        int32_t __stdcall SetRequestHeader(void* headerName, void* headerValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveRequestHeader(void* headerName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveRequestHeader(*reinterpret_cast<hstring const*>(&headerName));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Networking::BackgroundTransfer
{
    inline BackgroundDownloader::BackgroundDownloader() :
        BackgroundDownloader(impl::call_factory<BackgroundDownloader>([](auto&& f) { return f.template ActivateInstance<BackgroundDownloader>(); }))
    {
    }
    inline BackgroundDownloader::BackgroundDownloader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) :
        BackgroundDownloader(impl::call_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>([&](auto&& f) { return f.CreateWithCompletionGroup(completionGroup); }))
    {
    }
    inline auto BackgroundDownloader::GetCurrentDownloadsAsync()
    {
        return impl::call_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>([&](auto&& f) { return f.GetCurrentDownloadsAsync(); });
    }
    inline auto BackgroundDownloader::GetCurrentDownloadsAsync(param::hstring const& group)
    {
        return impl::call_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>([&](auto&& f) { return f.GetCurrentDownloadsAsync(group); });
    }
    inline auto BackgroundDownloader::GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group)
    {
        return impl::call_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>([&](auto&& f) { return f.GetCurrentDownloadsForTransferGroupAsync(group); });
    }
    inline auto BackgroundDownloader::RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations)
    {
        return impl::call_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>([&](auto&& f) { return f.RequestUnconstrainedDownloadsAsync(operations); });
    }
    inline BackgroundTransferCompletionGroup::BackgroundTransferCompletionGroup() :
        BackgroundTransferCompletionGroup(impl::call_factory<BackgroundTransferCompletionGroup>([](auto&& f) { return f.template ActivateInstance<BackgroundTransferCompletionGroup>(); }))
    {
    }
    inline BackgroundTransferContentPart::BackgroundTransferContentPart() :
        BackgroundTransferContentPart(impl::call_factory<BackgroundTransferContentPart>([](auto&& f) { return f.template ActivateInstance<BackgroundTransferContentPart>(); }))
    {
    }
    inline BackgroundTransferContentPart::BackgroundTransferContentPart(param::hstring const& name) :
        BackgroundTransferContentPart(impl::call_factory<BackgroundTransferContentPart, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>([&](auto&& f) { return f.CreateWithName(name); }))
    {
    }
    inline BackgroundTransferContentPart::BackgroundTransferContentPart(param::hstring const& name, param::hstring const& fileName) :
        BackgroundTransferContentPart(impl::call_factory<BackgroundTransferContentPart, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>([&](auto&& f) { return f.CreateWithNameAndFileName(name, fileName); }))
    {
    }
    inline auto BackgroundTransferError::GetStatus(int32_t hresult)
    {
        return impl::call_factory<BackgroundTransferError, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>([&](auto&& f) { return f.GetStatus(hresult); });
    }
    inline auto BackgroundTransferGroup::CreateGroup(param::hstring const& name)
    {
        return impl::call_factory<BackgroundTransferGroup, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>([&](auto&& f) { return f.CreateGroup(name); });
    }
    inline BackgroundUploader::BackgroundUploader() :
        BackgroundUploader(impl::call_factory<BackgroundUploader>([](auto&& f) { return f.template ActivateInstance<BackgroundUploader>(); }))
    {
    }
    inline BackgroundUploader::BackgroundUploader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) :
        BackgroundUploader(impl::call_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>([&](auto&& f) { return f.CreateWithCompletionGroup(completionGroup); }))
    {
    }
    inline auto BackgroundUploader::GetCurrentUploadsAsync()
    {
        return impl::call_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>([&](auto&& f) { return f.GetCurrentUploadsAsync(); });
    }
    inline auto BackgroundUploader::GetCurrentUploadsAsync(param::hstring const& group)
    {
        return impl::call_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>([&](auto&& f) { return f.GetCurrentUploadsAsync(group); });
    }
    inline auto BackgroundUploader::GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group)
    {
        return impl::call_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>([&](auto&& f) { return f.GetCurrentUploadsForTransferGroupAsync(group); });
    }
    inline auto BackgroundUploader::RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations)
    {
        return impl::call_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>([&](auto&& f) { return f.RequestUnconstrainedUploadsAsync(operations); });
    }
    inline auto ContentPrefetcher::ContentUris()
    {
        return impl::call_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>([&](auto&& f) { return f.ContentUris(); });
    }
    inline auto ContentPrefetcher::IndirectContentUri(Windows::Foundation::Uri const& value)
    {
        impl::call_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>([&](auto&& f) { return f.IndirectContentUri(value); });
    }
    inline auto ContentPrefetcher::IndirectContentUri()
    {
        return impl::call_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>([&](auto&& f) { return f.IndirectContentUri(); });
    }
    inline auto ContentPrefetcher::LastSuccessfulPrefetchTime()
    {
        return impl::call_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>([&](auto&& f) { return f.LastSuccessfulPrefetchTime(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader2> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader3> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcher> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcher> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation2> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation3> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation4> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation4> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation5> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation5> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IResponseInformation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IResponseInformation> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation2> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation3> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation4> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation4> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> {};
    template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::UploadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::UploadOperation> {};
}
#endif
