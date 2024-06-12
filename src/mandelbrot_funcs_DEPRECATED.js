import * as mandelbrotVars from './mandelbrot_vars';

// On page load
window.onload = function() {
	// load_default_data();
	parse_data();
}

// function load_default_data() {
// 	for (var index = 0; index < mandelbrotVars.default_depths.length; index++) {
// 		mandelbrotVars.depth_table.appendChild(get_row(mandelbrotVars.default_depths[index], mandelbrotVars.default_colors[index]));
// 	}
// }

export function parse_data(canvas, ctx, width_input, height_input, center_real_input, center_imag_input, width_scale_input) {
    // Update the canvas dimensions
    canvas.width = 640;
    canvas.height = 480;
  
    // Center variables
    const center_real = parseFloat(center_real_input.value);
    const center_imag = parseFloat(center_imag_input.value);
  
    // Scale variables
    const width_scale = parseFloat(width_scale_input.value);
    const aspect_ratio = canvas.width / canvas.height;
  
    // Render
    render(canvas, ctx, center_real, center_imag, width_scale, aspect_ratio);
  }

  export function render(canvas, ctx, center_real, center_imag, width_scale, aspect_ratio) {
    const left_real = center_real - width_scale / 2;
    const top_imag = center_imag + width_scale / (2 * aspect_ratio);
    let divergence_depth;
  
    for (let current_real = 0; current_real < canvas.width; current_real++) {
      for (let current_imag = 0; current_imag < canvas.height; current_imag++) {
        divergence_depth = get_divergence(
          left_real + (current_real * width_scale) / canvas.width,
          top_imag - (current_imag * width_scale) / (aspect_ratio * canvas.height),
          mandelbrotVars.max_itr
        );
        ctx.fillStyle = get_color(divergence_depth);
        ctx.fillRect(current_real, current_imag, 1, 1);
      }
    }
  }

function get_color(depth) {
    const len = mandelbrotVars.color_list.length;
    const depth_step = mandelbrotVars.max_itr / len; 
	for (var index = 0; index < len; index++) {
		if (depth < (index * depth_step)) {
			return mandelbrotVars.color_list[index];
		}
	}
	return mandelbrotVars.color_list[len];
}

function get_divergence(real, imag, depth) {
	var real_old = real;
	var imag_old = imag;
	var real_new;
	var imag_new;

	for (var index = 0; index < depth; index++) {
		if (within_radius_2(real_old, imag_old)) {
			real_new = real_old ** 2 - imag_old ** 2 + real;
			imag_new = 2 * real_old * imag_old + imag;

			real_old = real_new;
			imag_old = imag_new;
		} else {
			return index;
		}
	}

	return depth;
}

// function are_depths_sorted() {
// 	for (var index = 0; index < mandelbrotVars.depth_list.length - 1; index++) {
// 		if (mandelbrotVars.depth_list[index] >= mandelbrotVars.depth_list[index + 1]) {
// 			return false;
// 		}
// 	}
// 	return true;
// }

function within_radius_2(real, imag) {
	return Math.sqrt(real ** 2 + imag ** 2) < 2;
}

// function get_row(depth, color) {
// 	// Build depth input node
// 	var depth_input_node = document.createElement("input");
// 	depth_input_node.type = "number";
// 	depth_input_node.min = "1";
// 	depth_input_node.value = depth;

// 	// Build color input node
// 	var color_input_node = document.createElement("input");
// 	depth_input_node.type = "text";
// 	color_input_node.value = color;

// 	// Create row and column elements for the table
// 	var row_node = document.createElement("tr");
// 	var depth_column_node = document.createElement("td");
// 	var color_column_node = document.createElement("td");

// 	// Add inputs to column nodes
// 	depth_column_node.appendChild(depth_input_node);
// 	color_column_node.appendChild(color_input_node);

// 	// Add column nodes to row node
// 	row_node.appendChild(depth_column_node);
// 	row_node.appendChild(color_column_node);

// 	// Return row node
// 	return row_node;
// }

// function plus_click() {
// 	// Get depth from final item
// 	var final_depth = parseInt(mandelbrotVars.depth_table.lastChild.firstChild.firstChild.value);

// 	// Create and add generic row
// 	var row_node = get_row(final_depth + 1, "#000000");
// 	mandelbrotVars.depth_table.appendChild(row_node);
// }

// function minus_click() {
// 	if (mandelbrotVars.depth_rows.length > 4) {
// 		mandelbrotVars.depth_table.removeChild(mandelbrotVars.depth_table.lastChild);
// 	}
// }

export default function render_click() {
	parse_data();
    console.log("HELELELELAFKDO");
}