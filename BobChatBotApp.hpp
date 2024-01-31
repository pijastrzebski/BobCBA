#pragma once

#include <memory>

#include "IApp.hpp"
#include "IModule.hpp"

#include "Utils.hpp"

/**
 * @brief Bob Chat Bot App
 *
 * @version 1.0.0
 */
namespace bobcba {

	class BobChatBotApp : IApp {
	public:
		int init() override;
		int execute() override;

	private:
		std::unique_ptr<IModule> m_llmModule;
		std::unique_ptr<IModule> m_ttsModule;
	};

}  // namespace bobcba
