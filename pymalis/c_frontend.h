#ifndef C_FRONTEND_H
#define C_FRONTEND_H

#include <vector>

#include "malis_loss_layer.hpp"

void ___malis(
		size_t         width,
		size_t         height,
		size_t         depth,
		const float*   affinity_data,
		const int64_t* groundtruth_data,
		float*         loss_pos_data,
		float*         loss_neg_data) {

	MalisLossLayer malis;

	malis.evaluate(
			width, height, depth,
			affinity_data, groundtruth_data,
			loss_pos_data, loss_neg_data);
}

#endif
