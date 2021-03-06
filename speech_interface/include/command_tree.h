/*
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2012, Haikal Pribadi <haikal.pribadi@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of the Haikal Pribadi nor the names of other
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef _COMMAND_TREE_H
#define	_COMMAND_TREE_H

#include <ros/ros.h>
#include <vector>
#include <sstream>

#define root$ "$root"
#define end$ "$end"

/*
 * CommandTrie is a class that contains all the possible valid that could be
 * understood. It is developed based on the Suffix Trie data structure.
 */

class CommandTree
{
public:
  CommandTree();
  std::string element_;
  std::vector<CommandTree> children_;
  void populate(std::vector<std::vector<std::string> > commandSet);
  void add(std::vector<std::string> command);
  bool containsCommand(std::vector<std::string> sentence, std::vector<std::string>& cmd);
  static void print(CommandTree tree);
private:
  void add$(std::vector<std::string> command);
  bool containsCommand$(std::vector<std::string> sentence, std::vector<std::string>& cmd,
    CommandTree* root);
  static void print$(CommandTree tree, int depth);
};

#endif	/* _COMMANDTREE_H */

