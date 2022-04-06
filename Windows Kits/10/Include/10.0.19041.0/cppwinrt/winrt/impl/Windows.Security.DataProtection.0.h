// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_DataProtection_0_H
#define WINRT_Windows_Security_DataProtection_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage
{
    struct IStorageItem;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Security::DataProtection
{
    enum class UserDataAvailability : int32_t
    {
        Always = 0,
        AfterFirstUnlock = 1,
        WhileUnlocked = 2,
    };
    enum class UserDataBufferUnprotectStatus : int32_t
    {
        Succeeded = 0,
        Unavailable = 1,
    };
    enum class UserDataStorageItemProtectionStatus : int32_t
    {
        Succeeded = 0,
        NotProtectable = 1,
        DataUnavailable = 2,
    };
    struct IUserDataAvailabilityStateChangedEventArgs;
    struct IUserDataBufferUnprotectResult;
    struct IUserDataProtectionManager;
    struct IUserDataProtectionManagerStatics;
    struct IUserDataStorageItemProtectionInfo;
    struct UserDataAvailabilityStateChangedEventArgs;
    struct UserDataBufferUnprotectResult;
    struct UserDataProtectionManager;
    struct UserDataStorageItemProtectionInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::DataProtection::IUserDataBufferUnprotectResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::DataProtection::IUserDataProtectionManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::DataProtection::IUserDataProtectionManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataBufferUnprotectResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataProtectionManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataAvailability>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataBufferUnprotectStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::DataProtection::UserDataStorageItemProtectionStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.IUserDataAvailabilityStateChangedEventArgs" };
    };
    template <> struct name<Windows::Security::DataProtection::IUserDataBufferUnprotectResult>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.IUserDataBufferUnprotectResult" };
    };
    template <> struct name<Windows::Security::DataProtection::IUserDataProtectionManager>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.IUserDataProtectionManager" };
    };
    template <> struct name<Windows::Security::DataProtection::IUserDataProtectionManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.IUserDataProtectionManagerStatics" };
    };
    template <> struct name<Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.IUserDataStorageItemProtectionInfo" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataAvailabilityStateChangedEventArgs" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataBufferUnprotectResult>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataBufferUnprotectResult" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataProtectionManager>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataProtectionManager" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataStorageItemProtectionInfo" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataAvailability>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataAvailability" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataBufferUnprotectStatus>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataBufferUnprotectStatus" };
    };
    template <> struct name<Windows::Security::DataProtection::UserDataStorageItemProtectionStatus>
    {
        static constexpr auto & value{ L"Windows.Security.DataProtection.UserDataStorageItemProtectionStatus" };
    };
    template <> struct guid_storage<Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs>
    {
        static constexpr guid value{ 0xA76582C9,0x06A2,0x4273,{ 0xA8,0x03,0x83,0x4C,0x9F,0x87,0xFB,0xEB } };
    };
    template <> struct guid_storage<Windows::Security::DataProtection::IUserDataBufferUnprotectResult>
    {
        static constexpr guid value{ 0x8EFD0E90,0xFA9A,0x46A4,{ 0xA3,0x77,0x01,0xCE,0xBF,0x1E,0x74,0xD8 } };
    };
    template <> struct guid_storage<Windows::Security::DataProtection::IUserDataProtectionManager>
    {
        static constexpr guid value{ 0x1F13237D,0xB42E,0x4A88,{ 0x94,0x80,0x0F,0x24,0x09,0x24,0xC8,0x76 } };
    };
    template <> struct guid_storage<Windows::Security::DataProtection::IUserDataProtectionManagerStatics>
    {
        static constexpr guid value{ 0x977780E8,0x6DCE,0x4FAE,{ 0xAF,0x85,0x78,0x2A,0xC2,0xCF,0x45,0x72 } };
    };
    template <> struct guid_storage<Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo>
    {
        static constexpr guid value{ 0x5B6680F6,0xE87F,0x40A1,{ 0xB1,0x9D,0xA6,0x18,0x7A,0x0C,0x66,0x2F } };
    };
    template <> struct default_interface<Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs>
    {
        using type = Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Security::DataProtection::UserDataBufferUnprotectResult>
    {
        using type = Windows::Security::DataProtection::IUserDataBufferUnprotectResult;
    };
    template <> struct default_interface<Windows::Security::DataProtection::UserDataProtectionManager>
    {
        using type = Windows::Security::DataProtection::IUserDataProtectionManager;
    };
    template <> struct default_interface<Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>
    {
        using type = Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo;
    };
    template <> struct abi<Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::DataProtection::IUserDataBufferUnprotectResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UnprotectedBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::DataProtection::IUserDataProtectionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProtectStorageItemAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetStorageItemProtectionInfoAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProtectBufferAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall UnprotectBufferAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsContinuedDataAvailabilityExpected(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall add_DataAvailabilityStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataAvailabilityStateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::DataProtection::IUserDataProtectionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Availability(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_DataProtection_IUserDataAvailabilityStateChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Security::DataProtection::IUserDataAvailabilityStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Security_DataProtection_IUserDataAvailabilityStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Security_DataProtection_IUserDataBufferUnprotectResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto UnprotectedBuffer() const;
    };
    template <> struct consume<Windows::Security::DataProtection::IUserDataBufferUnprotectResult>
    {
        template <typename D> using type = consume_Windows_Security_DataProtection_IUserDataBufferUnprotectResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_DataProtection_IUserDataProtectionManager
    {
        auto ProtectStorageItemAsync(Windows::Storage::IStorageItem const& storageItem, Windows::Security::DataProtection::UserDataAvailability const& availability) const;
        auto GetStorageItemProtectionInfoAsync(Windows::Storage::IStorageItem const& storageItem) const;
        auto ProtectBufferAsync(Windows::Storage::Streams::IBuffer const& unprotectedBuffer, Windows::Security::DataProtection::UserDataAvailability const& availability) const;
        auto UnprotectBufferAsync(Windows::Storage::Streams::IBuffer const& protectedBuffer) const;
        auto IsContinuedDataAvailabilityExpected(Windows::Security::DataProtection::UserDataAvailability const& availability) const;
        auto DataAvailabilityStateChanged(Windows::Foundation::TypedEventHandler<Windows::Security::DataProtection::UserDataProtectionManager, Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> const& handler) const;
        using DataAvailabilityStateChanged_revoker = impl::event_revoker<Windows::Security::DataProtection::IUserDataProtectionManager, &impl::abi_t<Windows::Security::DataProtection::IUserDataProtectionManager>::remove_DataAvailabilityStateChanged>;
        DataAvailabilityStateChanged_revoker DataAvailabilityStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::DataProtection::UserDataProtectionManager, Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs> const& handler) const;
        auto DataAvailabilityStateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Security::DataProtection::IUserDataProtectionManager>
    {
        template <typename D> using type = consume_Windows_Security_DataProtection_IUserDataProtectionManager<D>;
    };
    template <typename D>
    struct consume_Windows_Security_DataProtection_IUserDataProtectionManagerStatics
    {
        auto TryGetDefault() const;
        auto TryGetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Security::DataProtection::IUserDataProtectionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_DataProtection_IUserDataProtectionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_DataProtection_IUserDataStorageItemProtectionInfo
    {
        [[nodiscard]] auto Availability() const;
    };
    template <> struct consume<Windows::Security::DataProtection::IUserDataStorageItemProtectionInfo>
    {
        template <typename D> using type = consume_Windows_Security_DataProtection_IUserDataStorageItemProtectionInfo<D>;
    };
}
#endif
