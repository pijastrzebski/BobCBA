#include "BobChatBotApp.hpp"

int main() {
	bobcba::BobChatBotApp bobApp;

	if (bobApp.init() != bobcba::utils::EStatus::OK)
	{
		return EXIT_FAILURE;
	}

	if (bobApp.execute() != bobcba::utils::EStatus::OK)
	{
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
