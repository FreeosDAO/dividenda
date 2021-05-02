This is unified single text of Freeos Dividend contract code, the same for the all three development environments. Only one difference is that file containing connections parameters for the code specific for each development environment are placed in separate folders called incl_optionsdiv for QA2 environment, incl_optionsdiva for automatic environment, and incl_freediv for Dev2 environment. The bash script menu.sh can generate wasm/abi pairs for each of these environment by selecting correct compilation option from the menu. 
The generated pairs dividenda.wasm and dividenda.abi are placed in own folders appropriate for their environments e.g. depl_optionsdiv for deployment in QA2 environment. 
So, again, the source code is identical for all three environments and has name dividenda.* . What is different is stored in the files dividend.hpp specific for each development environment.

Updated 2 May 2021 by AZ.
