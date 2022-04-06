// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Protection_2_H
#define WINRT_Windows_Media_Protection_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"
namespace winrt::Windows::Media::Protection
{
    struct ComponentLoadFailedEventHandler : Windows::Foundation::IUnknown
    {
        ComponentLoadFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ComponentLoadFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ComponentLoadFailedEventHandler(L lambda);
        template <typename F> ComponentLoadFailedEventHandler(F* function);
        template <typename O, typename M> ComponentLoadFailedEventHandler(O* object, M method);
        template <typename O, typename M> ComponentLoadFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ComponentLoadFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Protection::MediaProtectionManager const& sender, Windows::Media::Protection::ComponentLoadFailedEventArgs const& e) const;
    };
    struct RebootNeededEventHandler : Windows::Foundation::IUnknown
    {
        RebootNeededEventHandler(std::nullptr_t = nullptr) noexcept {}
        RebootNeededEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RebootNeededEventHandler(L lambda);
        template <typename F> RebootNeededEventHandler(F* function);
        template <typename O, typename M> RebootNeededEventHandler(O* object, M method);
        template <typename O, typename M> RebootNeededEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RebootNeededEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Protection::MediaProtectionManager const& sender) const;
    };
    struct ServiceRequestedEventHandler : Windows::Foundation::IUnknown
    {
        ServiceRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ServiceRequestedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ServiceRequestedEventHandler(L lambda);
        template <typename F> ServiceRequestedEventHandler(F* function);
        template <typename O, typename M> ServiceRequestedEventHandler(O* object, M method);
        template <typename O, typename M> ServiceRequestedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ServiceRequestedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Protection::MediaProtectionManager const& sender, Windows::Media::Protection::ServiceRequestedEventArgs const& e) const;
    };
    struct __declspec(empty_bases) ComponentLoadFailedEventArgs : Windows::Media::Protection::IComponentLoadFailedEventArgs
    {
        ComponentLoadFailedEventArgs(std::nullptr_t) noexcept {}
        ComponentLoadFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IComponentLoadFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct ComponentRenewal
    {
        ComponentRenewal() = delete;
        static auto RenewSystemComponentsAsync(Windows::Media::Protection::RevocationAndRenewalInformation const& information);
    };
    struct __declspec(empty_bases) HdcpSession : Windows::Media::Protection::IHdcpSession
    {
        HdcpSession(std::nullptr_t) noexcept {}
        HdcpSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IHdcpSession(ptr, take_ownership_from_abi) {}
        HdcpSession();
    };
    struct __declspec(empty_bases) MediaProtectionManager : Windows::Media::Protection::IMediaProtectionManager
    {
        MediaProtectionManager(std::nullptr_t) noexcept {}
        MediaProtectionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IMediaProtectionManager(ptr, take_ownership_from_abi) {}
        MediaProtectionManager();
    };
    struct __declspec(empty_bases) MediaProtectionPMPServer : Windows::Media::Protection::IMediaProtectionPMPServer
    {
        MediaProtectionPMPServer(std::nullptr_t) noexcept {}
        MediaProtectionPMPServer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IMediaProtectionPMPServer(ptr, take_ownership_from_abi) {}
        MediaProtectionPMPServer(Windows::Foundation::Collections::IPropertySet const& pProperties);
    };
    struct __declspec(empty_bases) MediaProtectionServiceCompletion : Windows::Media::Protection::IMediaProtectionServiceCompletion
    {
        MediaProtectionServiceCompletion(std::nullptr_t) noexcept {}
        MediaProtectionServiceCompletion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IMediaProtectionServiceCompletion(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectionCapabilities : Windows::Media::Protection::IProtectionCapabilities
    {
        ProtectionCapabilities(std::nullptr_t) noexcept {}
        ProtectionCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IProtectionCapabilities(ptr, take_ownership_from_abi) {}
        ProtectionCapabilities();
    };
    struct __declspec(empty_bases) RevocationAndRenewalInformation : Windows::Media::Protection::IRevocationAndRenewalInformation
    {
        RevocationAndRenewalInformation(std::nullptr_t) noexcept {}
        RevocationAndRenewalInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IRevocationAndRenewalInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RevocationAndRenewalItem : Windows::Media::Protection::IRevocationAndRenewalItem
    {
        RevocationAndRenewalItem(std::nullptr_t) noexcept {}
        RevocationAndRenewalItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IRevocationAndRenewalItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServiceRequestedEventArgs : Windows::Media::Protection::IServiceRequestedEventArgs,
        impl::require<ServiceRequestedEventArgs, Windows::Media::Protection::IServiceRequestedEventArgs2>
    {
        ServiceRequestedEventArgs(std::nullptr_t) noexcept {}
        ServiceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::IServiceRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif