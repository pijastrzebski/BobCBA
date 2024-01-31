#include "BobChatBotApp.hpp"

#include "LLaMaModule.hpp"

namespace bobcba {
	using namespace utils;

	int BobChatBotApp::init() {
		// init llm
		m_llmModule = std::make_unique<LLaMaModule>();

		if (!m_llmModule) {
			return EStatus::ERROR;
		}
		if (m_llmModule->init() != EStatus::OK)
		{
			return EStatus::ERROR;
		}

		// init tts

		// init asr

		return EStatus::OK;
	}

	int BobChatBotApp::execute() { return utils::EStatus::OK; }

} // namespace bobcba