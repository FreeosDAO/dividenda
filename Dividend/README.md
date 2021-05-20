This is unified single text of Freeos Dividend contract code, the same for the all three development environments. Only one difference is that file containing connections parameters for the code specific for each development environment are placed in separate folders called incl_optionsdiv for QA2 environment, incl_optionsdiva for automatic environment, and incl_freediv for Dev2 environment. The bash script menu.sh can generate wasm/abi pairs for each of these environment by selecting correct compilation option from the menu. 
The generated pairs dividenda.wasm and dividenda.abi are placed in own folders appropriate for their environments e.g. depl_optionsdiv for deployment in QA2 environment. 
So, again, the source code is identical for all three environments and has name dividenda.* . What is different is stored in the files dividend.hpp specific for each development environment.

Updated 2 May 2021 by AZ.

Versions description and CHANGE LOG
 
130 - identification function auth_vip to identify members of whitelist table. Changes in names. 20th Apr.
131 - added upsert_value and upsert_perc also two 
      secondary index search verification 
132 - optionsdiv freeos freeosconfig allocate 28 04 2021 Changed external naming convention
133 - detour around 'replay' allowing minting NFT when iteration zero
134 - the same source code is used since now for all the environments - only dividend.hpp has different external file references for
      all environments
135 - corrected permissions for various different environments
136 - change in counting remaining tokens for DAO account - corrections by using the thresholds of cap=2 and cap=3 when applicable.
      adding iterationlog table showing the details of processing the deposits table in a form of spreedsheet. There is no test actions
      to manipulate this table provided. The table will only contain passive data tracking the process of 'dividendcvompute'. 13 May 21.
137 - minor updates for logs table
138 - further improvements for logs
139 - Latest version before removing test instructions
140 - Version with no tests. Note: It is on current branch.
