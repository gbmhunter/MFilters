========
MFilters
========

--------------------------------------------------------------------
A microcontroller-friendly C++ filter library.
--------------------------------------------------------------------

.. image:: https://api.travis-ci.org/mbedded-ninja/MFilters.png?branch=master   
	:target: https://travis-ci.org/mbedded-ninja/MFilters

- Author: gbmhunter <gbmhunter@gmail.com> (www.mbedded.ninja)
- First Ever Commit: 2014-09-16
- Last Modified: 2014-09-16
- Version: v1.0.0.0
- Company: mbedded.ninja
- Project: MToolkit
- Language: C++
- Compiler: GCC	
- uC Model: n/a
- Computer Architecture: n/a
- Operating System: n/a
- Documentation Format: Doxygen
- License: GPLv3

Description
===========


Features:

- Embedded (microcontroller) support
- Small flash/RAM memory footprint
- Unit tests
- Doxygen-style well-documented API.
- Portability

External Dependencies
=====================

Nothing here yet.

Issues
======

See GitHub Issues.

Limitations
===========

Nothing here yet.

Usage
=====

See the unit tests in the 'test/' directory for basic examples.
	
Changelog
=========

========= ========== ===================================================================================================
Version   Date       Comment
========= ========== ===================================================================================================
v1.0.0.0  2014-09-16 Initial commit. Added ExponentialFilter class and a few basic unit tests. Some unit tests are currently failing because the MUnitTest module does not yest provide a CHECK_CLOSE() macro, which is on the todo list.
========= ========== ===================================================================================================