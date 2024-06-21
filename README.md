# EE2-Project - Imperial College London

#### 2nd Year Design Engineering Design Project - ELEC50015

![exampleimage](/Evaluation_and_Testing/src/exampleimage.jpg)

## Abstract

For the 2024 second year engineering design project, a solution is presented for an educational tool
used to visualise complex fractals, aided by an FPGA with synthesised accelerator hardware. In
this project an initial SystemVerilog development stack was used to design a parallelised
accelerator. This accelerator included a pipelined engine to perform Mandelbrot calculations and
an advanced FIFO system to maximise system performance. This design, after thorough testing
using multiple testbenches, was synthesised on a PYNQ-Z1 FPGA - making good use of its
resources by instantiating numerous parallel engines for the final design


Additionally, a website UI combined with a server-side database was developed to enhance the
system’s user-experience. Users can easily update parameters on the website and then quickly see
the calculated visualisation on a screen. The server-side database also offers educational
functionality along side the UI, to allow students to save images to share with their peers.


In order to integrate the database functionality on the FPGA, a concurrent python program was
developed to interface between the database, the synthesised hardware and the HDMI output (for
the visualisation). This linked together all the components to communicate with each other,
forming the final system.



Finally, extensive testing was performed on ensure that the system requirements were met. This
proved to be the case using quantitative and qualitative results, procured using various methods.
This project has taught us technical and professional competencies, improved our project
management skills and developed our skill-set as engineers.
i
