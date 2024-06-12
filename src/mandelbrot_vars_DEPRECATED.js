// mandelbrot_vars.js

// Default color data
export let color_list = ["#9933FF", "#CC33FF", "#FF66FF", "#FF66CC", "#FF6699", "#FF6666", "#FF9966", "#FFCC66", "#FFFF66", "#FFFF99", "#FFFFCC", "#FFFFFF", "#000000"];

// Center Inputs
export let center_real_input = document.getElementById("realCenter");
export let center_imag_input = document.getElementById("imagCenter");

// Zoom Input
export let width_scale_input = document.getElementById("widthScale");

// Background Color
export let bg_color_input = "#000000";

// Depth Chart
// export let depth_table = document.getElementById("depthTable");
// export let depth_rows = depth_table.childNodes;

// Max Iterations
export let max_itr = document.getElementById("maxIterations");

// Center variables
export let center_real;
export let center_imag;

// Scale variables
export let width_scale;
export let aspect_ratio;

// Depth and colors
export let depth_list;
