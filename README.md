# Degree
# Language: C++
# Input: CSV (network)
# Output: NOA (central nodes and centrality values)
# Tested with: PluMA 1.1, gcc 4.8.4

PluMA plugin to compute degree centrality (Freeman, 1979), which will find the 
most important nodes in a network based on node degree.  This particular version
will work on a weighted network.

The plugin accepts an input network in CSV format and will produce
a ranked list of central nodes and centrality values in a NOde Attribute (NOA)
file which can be imported into Cytoscape for visualization and downstream
analysis.


