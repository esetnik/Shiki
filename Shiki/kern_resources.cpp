//                                                   
//  kern_resources.cpp                               
//  Shiki                                            
//                                                   
//  Copyright © 2016-2017 vit9696. All rights reserved.   
//                                                   
//  This is an autogenerated file!                   
//  Please avoid any modifications!                  
//                                                   

#include "kern_resources.hpp"                      


// Patch section

alignas(8) static const uint8_t patchBuf0[] { 0xBF, 0x69, 0x6D, 0x72, 0x64, 0xBE, 0x2C, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf1[] { 0xBF, 0x6E, 0x6D, 0x72, 0x64, 0xBE, 0x2C, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf2[] { 0xBF, 0x69, 0x6D, 0x72, 0x64, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf3[] { 0xBF, 0x6E, 0x6D, 0x72, 0x64, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf4[] { 0xBF, 0x63, 0x76, 0x61, 0x71, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf5[] { 0xBF, 0x6E, 0x76, 0x61, 0x71, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf6[] { 0xBF, 0x63, 0x76, 0x61, 0x63, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf7[] { 0xBF, 0x6E, 0x76, 0x61, 0x63, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf8[] { 0xBF, 0x63, 0x76, 0x61, 0x65, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf9[] { 0xBF, 0x6E, 0x76, 0x61, 0x65, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf10[] { 0xBF, 0x63, 0x76, 0x61, 0x7A, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf11[] { 0xBF, 0x6E, 0x76, 0x61, 0x7A, 0xBE, 0x90, 0x01, 0x00, 0x00, };
static UserPatcher::BinaryModPatch patches0[] {
	{ CPU_TYPE_X86_64, patchBuf0, patchBuf1, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNDRMI },
	{ CPU_TYPE_X86_64, patchBuf2, patchBuf3, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNDRMI },
	{ CPU_TYPE_X86_64, patchBuf4, patchBuf5, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
	{ CPU_TYPE_X86_64, patchBuf6, patchBuf7, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
	{ CPU_TYPE_X86_64, patchBuf8, patchBuf9, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
	{ CPU_TYPE_X86_64, patchBuf10, patchBuf11, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
};
alignas(8) static const uint8_t patchBuf12[] { 0xC7, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x0F, 0xA2, };
alignas(8) static const uint8_t patchBuf13[] { 0xC7, 0xC0, 0xC2, 0x06, 0x02, 0x00, 0x90, 0x90, };
static UserPatcher::BinaryModPatch patches1[] {
	{ CPU_TYPE_X86_64, patchBuf12, patchBuf13, 8, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionFCPUID },
};
alignas(8) static const uint8_t patchBuf14[] { 0x66, 0x6F, 0x72, 0x63, 0x65, 0x4F, 0x66, 0x66, };
alignas(8) static const uint8_t patchBuf15[] { 0x61, 0x76, 0x6F, 0x69, 0x64, 0x4F, 0x66, 0x66, };
alignas(8) static const uint8_t patchBuf16[] { 0x68, 0x77, 0x65, 0x42, 0x47, 0x52, 0x41, };
alignas(8) static const uint8_t patchBuf17[] { 0x73, 0x77, 0x65, 0x42, 0x47, 0x52, 0x41, };
alignas(8) static const uint8_t patchBuf18[] { 0x00, };
alignas(8) static const uint8_t patchBuf19[] { 0x00, };
static UserPatcher::BinaryModPatch patches2[] {
	{ CPU_TYPE_X86_64, patchBuf14, patchBuf15, 8, 0, 2, UserPatcher::FileSegment::SegmentTextCstring, SectionOFFLINE },
	{ CPU_TYPE_X86_64, patchBuf16, patchBuf17, 7, 0, 2, UserPatcher::FileSegment::SegmentTextCstring, SectionBGRA },
	{ CPU_TYPE_X86_64, patchBuf18, patchBuf19, 1, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNVDA },
};
alignas(8) static const uint8_t patchBuf20[] { 0x41, 0x70, 0x70, 0x6C, 0x65, 0x47, 0x56, 0x41, 0x2E, 0x66, 0x72, 0x61, 0x6D, 0x65, 0x77, 0x6F, 0x72, 0x6B, };
alignas(8) static const uint8_t patchBuf21[] { 0x41, 0x70, 0x70, 0x6C, 0x65, 0x47, 0x56, 0x41, 0x2E, 0x64, 0x6F, 0x6E, 0x6F, 0x74, 0x77, 0x6F, 0x72, 0x6B, };
static UserPatcher::BinaryModPatch patches3[] {
	{ CPU_TYPE_X86_64, patchBuf20, patchBuf21, 18, 0, 1, UserPatcher::FileSegment::SegmentTextCstring, SectionKILLGVA },
};

// Mod section

UserPatcher::BinaryModInfo ADDPR(binaryMod)[] {
	{ "/System/Library/Frameworks/VideoToolbox.framework/Versions/A/VideoToolbox", patches0, 6 },
	{ "/System/Library/PrivateFrameworks/CoreFP.framework/Versions/A/CoreFP", patches1, 1 },
	{ "/System/Library/PrivateFrameworks/AppleGVA.framework/Versions/A/AppleGVA", patches2, 3 },
	{ "/System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox", patches3, 1 },
};

const size_t ADDPR(binaryModSize) {4};

// Process list
using PF = UserPatcher::ProcInfo::ProcFlags;

UserPatcher::ProcInfo ADDPR(procInfo)[] {
	{ "/Applications/iTunes.app/Contents/MacOS/iTunes", 46, SectionNDRMI, PF::MatchExact },
	{ "/Applications/iTunes.app/Contents/MacOS/iTunes", 46, SectionKILLGVA, PF::MatchExact },
	{ "/Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player", 66, SectionNDRMI, PF::MatchExact },
	{ "/Applications/Safari.app/Contents/MacOS/Safari", 46, SectionNSTREAM, PF::MatchExact },
	{ "/System/Library/Frameworks/WebKit.framework/Versions/A/XPCServices/com.apple.WebKit.WebContent.xpc/Contents/MacOS/com.apple.WebKit.WebContent", 141, SectionNSTREAM, PF::MatchExact },
	{ "/System/Library/Frameworks/WebKit.framework/Versions/A/XPCServices/com.apple.WebKit.WebContent.xpc/Contents/MacOS/com.apple.WebKit.WebContent", 141, SectionNVDA, PF::MatchExact },
	{ "/Applications/Safari.app/Contents/MacOS/Safari", 46, SectionNVDA, PF::MatchExact },
	{ "/Final Cut Pro.app/Contents/MacOS/Final Cut Pro", 47, SectionNVDA, PF::MatchSuffix },
	{ "/Motion.app/Contents/MacOS/Motion", 33, SectionNVDA, PF::MatchSuffix },
	{ "/Compressor.app/Contents/MacOS/Compressor", 41, SectionNVDA, PF::MatchSuffix },
	{ "/IINA.app/Contents/MacOS/IINA", 29, SectionNVDA, PF::MatchSuffix },
	{ "/VLC.app/Contents/MacOS/VLC", 27, SectionNVDA, PF::MatchSuffix },
	{ "/MacX Video Converter Pro.app/Contents/MacOS/MacX Video Converter Pro", 69, SectionNVDA, PF::MatchSuffix },
	{ "/XviD4PSP.app/Contents/MacOS/XviD4PSP", 37, SectionNVDA, PF::MatchSuffix },
	{ "/Opera.app/Contents/MacOS/Opera", 31, SectionNVDA, PF::MatchSuffix },
	{ "/Firefox.app/Contents/MacOS/firefox-bin", 39, SectionNVDA, PF::MatchSuffix },
	{ "/Firefox.app/Contents/MacOS/firefox", 35, SectionNVDA, PF::MatchSuffix },
	{ "/VDADecoderChecker", 18, SectionNVDA, PF::MatchSuffix },
};

const size_t ADDPR(procInfoSize) {18};