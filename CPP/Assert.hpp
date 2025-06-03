#pragma once

namespace NumbatLogic
{
	class Assert
	{
		public: static void Assert(bool bTest, const char* sxAssert, const char* sxFile, int nLine);
		public: static void Assert(bool bTest);
	};
}