#pragma once

#include "rgl_io_text_stream.h"

namespace rgl
{
	struct io_output_text_file_stream : io_text_stream
	{
		FILE *file;
		bool u10;
		bool u11;
	};
}
