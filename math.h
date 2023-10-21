#pragma once
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

extern "C" MATHLIBRARY_API void pikachu_math(
	const unsigned long long j, const unsigned long long k
);

extern "C" MATHLIBRARY_API void pikachu_sequence();
