#pragma once
#if defined(_WIN32) && !defined(UNILINK_HEADER_ONLY)
#if defined(UNILINK_BUILDING_DLL)
#define UNILINK_API __declspec(dllexport)
#else
#define UNILINK_API __declspec(dllimport)
#endif
#else
#define UNILINK_API __attribute__((visibility("default")))
#endif