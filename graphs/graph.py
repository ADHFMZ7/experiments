from dataclasses import dataclass
from graphviz import Digraph

class graph:
   
  def __init__(self):
    self.vertices = {}
    self.edges = []
    self.V = 0
    self.E = 0


  def find_node(self, label):
    for i in self.vertices.keys():
      if i.label == label:
        return i
    return False


  def new_node(self, label, val=0):
    self.vertices[node(label, val, self.V)] = []
    self.V += 1


  def new_edge(self, label1, label2):
    self.E += 1
    self.vertices[self.find_node(label1)].append(label2) 
    self.edges.append(f'{label1}{label2}')
     
    
  def __setitem__(self, label1, label2):
    if not self.find_node(label1):
      self.new_node(label1)
    if not self.find_node(label2):
      self.new_node(label2)
    self.new_edge(label1, label2) 
      
   
  def __getitem__(self, label):
    if not self.find_node(label):
      self.new_node(label)
    return self.find_node(label)
 
  
  def __delitem__(self, label):
    self.V -= 1
    for i, e in enumerate(self.edges):
      if label in e:
        self.E -=1
        self.edges[i] = ''
    self.edges = [i for i in self.edges if i]
    for i in list(self.vertices):
      if label in self.vertices[i]:
        self.vertices[i].remove(label)
    del self.vertices[self.find_node(label)]
  
   
  def __repr__(self):
    return repr(self.vertices).replace(', n', ',\nn').replace('{', '{\n').replace('}', '\n}')
   
    
  def draw(self):
    dot = Digraph(format='svg', graph_attr={'rankdir': 'LR'})
    for i in self.vertices.keys():
      dot.node(i.label)
    for i in self.edges:
      dot.edge(i[0], i[1])
    return dot


@dataclass(frozen=True)
class node:
  label  :  str
  val    :  int
  index  :  int





