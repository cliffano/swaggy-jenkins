note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 1.0.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class HUDSON_MASTER_COMPUTEREXECUTORS 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    current_executable: detachable FREE_STYLE_BUILD 
      
    idle: BOOLEAN 
      
    likely_stuck: BOOLEAN 
      
    number: INTEGER_32 
      
    progress: INTEGER_32 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_current_executable (a_name: like current_executable)
        -- Set 'current_executable' with 'a_name'.
      do
        current_executable := a_name
      ensure
        current_executable_set: current_executable = a_name		
      end

    set_idle (a_name: like idle)
        -- Set 'idle' with 'a_name'.
      do
        idle := a_name
      ensure
        idle_set: idle = a_name		
      end

    set_likely_stuck (a_name: like likely_stuck)
        -- Set 'likely_stuck' with 'a_name'.
      do
        likely_stuck := a_name
      ensure
        likely_stuck_set: likely_stuck = a_name		
      end

    set_number (a_name: like number)
        -- Set 'number' with 'a_name'.
      do
        number := a_name
      ensure
        number_set: number = a_name		
      end

    set_progress (a_name: like progress)
        -- Set 'progress' with 'a_name'.
      do
        progress := a_name
      ensure
        progress_set: progress = a_name		
      end

    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass HUDSON_MASTER_COMPUTEREXECUTORS%N")
        if attached current_executable as l_current_executable then
          Result.append ("%Ncurrent_executable:")
          Result.append (l_current_executable.out)
          Result.append ("%N")    
        end  
        if attached idle as l_idle then
          Result.append ("%Nidle:")
          Result.append (l_idle.out)
          Result.append ("%N")    
        end  
        if attached likely_stuck as l_likely_stuck then
          Result.append ("%Nlikely_stuck:")
          Result.append (l_likely_stuck.out)
          Result.append ("%N")    
        end  
        if attached number as l_number then
          Result.append ("%Nnumber:")
          Result.append (l_number.out)
          Result.append ("%N")    
        end  
        if attached progress as l_progress then
          Result.append ("%Nprogress:")
          Result.append (l_progress.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end


