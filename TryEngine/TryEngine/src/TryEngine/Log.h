#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"

namespace TryEngine
{
	class TRYENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define TE_CORE_FATAL(...) ::TryEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define TE_CORE_ERROR(...) ::TryEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TE_CORE_WARN(...)  ::TryEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TE_CORE_INFO(...)  ::TryEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TE_CORE_TRACE(...) ::TryEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define TE_FATAL(...) ::TryEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define TE_ERROR(...) ::TryEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define TE_WARN(...)  ::TryEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TE_INFO(...)  ::TryEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define TE_TRACE(...) ::TryEngine::Log::GetClientLogger()->trace(__VA_ARGS__)

