// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Globalization_PhoneNumberFormatting_0_H
#define WINRT_Windows_Globalization_PhoneNumberFormatting_0_H
WINRT_EXPORT namespace winrt::Windows::Globalization::PhoneNumberFormatting
{
    enum class PhoneNumberFormat : int32_t
    {
        E164 = 0,
        International = 1,
        National = 2,
        Rfc3966 = 3,
    };
    enum class PhoneNumberMatchResult : int32_t
    {
        NoMatch = 0,
        ShortNationalSignificantNumberMatch = 1,
        NationalSignificantNumberMatch = 2,
        ExactMatch = 3,
    };
    enum class PhoneNumberParseResult : int32_t
    {
        Valid = 0,
        NotANumber = 1,
        InvalidCountryCode = 2,
        TooShort = 3,
        TooLong = 4,
    };
    enum class PredictedPhoneNumberKind : int32_t
    {
        FixedLine = 0,
        Mobile = 1,
        FixedLineOrMobile = 2,
        TollFree = 3,
        PremiumRate = 4,
        SharedCost = 5,
        Voip = 6,
        PersonalNumber = 7,
        Pager = 8,
        UniversalAccountNumber = 9,
        Voicemail = 10,
        Unknown = 11,
    };
    struct IPhoneNumberFormatter;
    struct IPhoneNumberFormatterStatics;
    struct IPhoneNumberInfo;
    struct IPhoneNumberInfoFactory;
    struct IPhoneNumberInfoStatics;
    struct PhoneNumberFormatter;
    struct PhoneNumberInfo;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter> = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo> = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat> = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult> = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberMatchResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult> = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberParseResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind> = L"Windows.Globalization.PhoneNumberFormatting.PredictedPhoneNumberKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics> = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory> = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics> = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>{ 0x1556B49E,0xBAD4,0x4B4A,{ 0x90,0x0D,0x44,0x07,0xAD,0xB7,0xC9,0x81 } }; // 1556B49E-BAD4-4B4A-900D-4407ADB7C981
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>{ 0x5CA6F931,0x84D9,0x414B,{ 0xAB,0x4E,0xA0,0x55,0x2C,0x87,0x86,0x02 } }; // 5CA6F931-84D9-414B-AB4E-A0552C878602
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>{ 0x1C7CE4DD,0xC8B4,0x4EA3,{ 0x9A,0xEF,0xB3,0x42,0xE2,0xC5,0xB4,0x17 } }; // 1C7CE4DD-C8B4-4EA3-9AEF-B342E2C5B417
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>{ 0x8202B964,0xADAA,0x4CFF,{ 0x8F,0xCF,0x17,0xE7,0x51,0x6A,0x28,0xFF } }; // 8202B964-ADAA-4CFF-8FCF-17E7516A28FF
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>{ 0x5B3F4F6A,0x86A9,0x40E9,{ 0x86,0x49,0x6D,0x61,0x16,0x19,0x28,0xD4 } }; // 5B3F4F6A-86A9-40E9-8649-6D61161928D4
    template <> struct default_interface<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>{ using type = winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter; };
    template <> struct default_interface<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>{ using type = winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo; };
    template <> struct abi<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Format(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FormatWithOutputFormat(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FormatPartialString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FormatString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FormatStringWithLeftToRightMarkers(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCountryCodeForRegion(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNationalDirectDialingPrefixForRegion(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall WrapWithLeftToRightMarkers(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CountryCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall GetLengthOfGeographicalAreaCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNationalSignificantNumber(void**) noexcept = 0;
            virtual int32_t __stdcall GetLengthOfNationalDestinationCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PredictNumberKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetGeographicRegionCode(void**) noexcept = 0;
            virtual int32_t __stdcall CheckNumberMatch(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryParseWithRegion(void*, void*, void**, int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter
    {
        WINRT_IMPL_AUTO(hstring) Format(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number) const;
        WINRT_IMPL_AUTO(hstring) Format(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat const& numberFormat) const;
        WINRT_IMPL_AUTO(hstring) FormatPartialString(param::hstring const& number) const;
        WINRT_IMPL_AUTO(hstring) FormatString(param::hstring const& number) const;
        WINRT_IMPL_AUTO(hstring) FormatStringWithLeftToRightMarkers(param::hstring const& number) const;
    };
    template <> struct consume<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics
    {
        WINRT_IMPL_AUTO(void) TryCreate(param::hstring const& regionCode, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber) const;
        WINRT_IMPL_AUTO(int32_t) GetCountryCodeForRegion(param::hstring const& regionCode) const;
        WINRT_IMPL_AUTO(hstring) GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit) const;
        WINRT_IMPL_AUTO(hstring) WrapWithLeftToRightMarkers(param::hstring const& number) const;
    };
    template <> struct consume<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) CountryCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PhoneNumber() const;
        WINRT_IMPL_AUTO(int32_t) GetLengthOfGeographicalAreaCode() const;
        WINRT_IMPL_AUTO(hstring) GetNationalSignificantNumber() const;
        WINRT_IMPL_AUTO(int32_t) GetLengthOfNationalDestinationCode() const;
        WINRT_IMPL_AUTO(winrt::Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind) PredictNumberKind() const;
        WINRT_IMPL_AUTO(hstring) GetGeographicRegionCode() const;
        WINRT_IMPL_AUTO(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult) CheckNumberMatch(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& otherNumber) const;
    };
    template <> struct consume<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo) Create(param::hstring const& number) const;
    };
    template <> struct consume<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult) TryParse(param::hstring const& input, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const;
        WINRT_IMPL_AUTO(winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult) TryParse(param::hstring const& input, param::hstring const& regionCode, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const;
    };
    template <> struct consume<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics<D>;
    };
}
#endif
