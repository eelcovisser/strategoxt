\literate[dir-test]

	\begin{abstract}
	A dir module for definition of unit tests.
	\end{abstract}

\begin{code}
module dir-test
imports sunit dir
strategies

  main = 
    test-suite(!"dir-test", 
      test1;
      test2;
      test3
    )

  test1 =
    apply-test(!"test1"
	, readdir; fetch-elem(?"dir-test.c")
	, !"."
	, !"dir-test.c"
	)

  test2 =
    apply-and-check(!"test2a"
	, modification-time
	, !"dir-test.rtree"
	, debug; is-int
	);
    apply-and-check(!"test2b"
	, file-newer
	, !("dir-test.c", "dir-test.rtree")
	, debug
	)

  test3 =
    apply-and-check(!"test3"
	, getenv
	, !"HOME"
	, debug; is-string
	)
\end{code}

% Copyright (C) 2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.
